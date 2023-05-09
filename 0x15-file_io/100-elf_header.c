#include "main.h"

#define BUF_SIZE 1024

void print_error(const char* message, const char* filename);

void print_header(const char* filename, char* buf);

int main(int argc, char* argv[]) {
	    int fd;
	        char buf[BUF_SIZE];

		    /* Check command line arguments */
		    if (argc < 2) {
			            print_error("Missing filename", "No file specified");
				        }

		        /* Open ELF file */
		        fd = open(argv[1], O_RDONLY);
			    if (fd < 0) {
				            print_error("Cannot open file", argv[1]);
					        }

			        /* Read ELF header */
			        if (read(fd, buf, BUF_SIZE) < 0) {
					        print_error("Cannot read file", argv[1]);
						    }

				    /* Print ELF header */
				    print_header(argv[1], buf);

				        /* Close file and exit */
				        close(fd);
					    return 0;
}

void print_error(const char* message, const char* filename) {
	    fprintf(stderr, "readelf: Error: %s: %s\n", message, filename);
	        exit(98);
}

void print_header(const char* filename, char* buf) {
	    int i;
	        uint16_t u16;
		    uint32_t u32;
		        uint64_t u64;

			    /* Check ELF magic number */
			    if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F') {
				            print_error("File format not recognized", filename);
					        }

			        /* Parse ELF header */
			        printf("ELF Header:\n");

				    /* Magic number */
				    printf("  Magic:   ");
				        for (i = 0; i < 16; i++) {
						        printf("%02x ", (unsigned char)buf[i]);
							    }
					    printf("\n");

					        /* Class */
					        printf("  Class:                             %s\n", buf[4] == 1 ? "ELF32" : buf[4] == 2 ? "ELF64" : "Invalid class");

						    /* Data encoding */
						    printf("  Data:                              %s\n", buf[5] == 1 ? "2's complement, little endian" : buf[5] == 2 ? "2's complement, big endian" : "Invalid data encoding");

						        /* Version */
						        printf("  Version:                           %d%s\n", buf[6], buf[6] == 1 ? " (current)" : "");

							    /* OS/ABI */
							    printf("  OS/ABI:                            %s\n", buf[7] == 0 ? "UNIX - System V" : buf[7] == 3 ? "Linux" : "Other");

							        /* ABI version */
							        printf("  ABI Version:                       %d\n", buf[8]);

								    /* Type */
								    printf("  Type:                              %s\n", buf[16] == 1 ? "REL (Relocatable file)" : buf[16] == 2 ? "EXEC (Executable file)" : buf[16] == 3 ? "DYN (Shared object file)" : "Other");

								        /* Machine */
								        printf("  Machine:                           %s\n", buf[18] == 3 ? "x86" : buf[18] == 62 ? "x86-64" : "Other");

									    /* Entry point */
									    u64 = *(uint64_t*)(buf + 24 + (buf[4] == 2 ? 8 : 0));
									        printf("  Entry point address:               0x%" PRIx64 "\n", u64);

										    /* Program header offset */
										    u64 = *(uint64_t*)(buf + 32 + (buf[4] == 2 ? 8 : 0));
										        printf("  Start of program headers:          %lu (bytes into file)\n", u64);

											    /* Section header offset */
											    u64 = *(uint64_t*)(buf + 40 + (buf[4] == 2 ? 8 : 0));
											        printf("  Start of section headers:          %lu (bytes into file)\n", u64);

												    /* Flags */
												    u32 = *(uint32_t*)(buf + 52 + (buf[4] == 2 ? 8 : 0));
												        printf("  Flags:                             0x%" PRIx32 "\n", u32);

													    /* Header size */
													    u16 = *(uint16_t*)(buf + 54 + (buf[4] == 2 ? 8 : 0));
													        printf("  Size of this header:               %d (bytes)\n", u16);

														    /* Program header size */
														    u16 = *(uint16_t*)(buf + 56 + (buf[4] == 2 ? 8 : 0));
														        printf("  Size of program headers:           %d (bytes)\n", u16);

															    /* Number of program headers */
															    u16 = *(uint16_t*)(buf + 58 + (buf[4] == 2 ? 8 : 0));
															        printf("  Number of program headers:         %d\n", u16);

																    /* Section header size */
																    u16 = *(uint16_t*)(buf + 60 + (buf[4] == 2 ? 8 : 0));
																        printf("  Size of section headers:           %d (bytes)\n", u16);

																	    /* Number of section headers */
																	    u16 = *(uint16_t*)(buf + 62 + (buf[4] == 2 ? 8 : 0));
																	        printf("  Number of section headers:         %d\n", u16);

																		    /* Section header string table index */
																		    u16 = *(uint16_t*)(buf + 64 + (buf[4] == 2 ? 8 : 0));
																		        printf("  Section header string table index: %d\n", u16);
}

