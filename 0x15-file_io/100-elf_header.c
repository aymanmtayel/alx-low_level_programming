#include "main.h"

#define BUF_SIZE 4096

void print_error(const char* message, const char* filename);
void print_header(const char* filename, char* buf);

int main(int argc, char* argv[]) {
	    int fd;
	        char buf[BUF_SIZE];
		    off_t size;
		        ssize_t nread;

			    if (argc < 2) {
				            print_error("Missing filename", "No file specified");
					        }

			        fd = open(argv[1], O_RDONLY);
				    if (fd < 0) {
					            print_error("Cannot open file", argv[1]);
						        }

				        size = lseek(fd, 0, SEEK_END);
					    if (size < 0 || size < 64) {
						            print_error("File too small", argv[1]);
							        }
					        if (lseek(fd, 0, SEEK_SET) < 0) {
							        print_error("Cannot seek file", argv[1]);
								    }

						    nread = read(fd, buf, 64);
						        if (nread < 0) {
								        print_error("Cannot read file", argv[1]);
									    }

							    print_header(argv[1], buf);

							        close(fd);
								    return 0;
}

void print_error(const char* message, const char* filename) {
	    fprintf(stderr, "readelf: Error: %s: %s\n", message, filename);
	        exit(98);
}

void print_header(const char* filename, char* buf) {
	    int i;
	        uint32_t u32;
		    uint64_t u64;

		        if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F') {
				        print_error("File format not recognized", filename);
					    }

			    printf("ELF Header:\n");

			        printf("  Magic:   ");
				    for (i = 0; i < 16; i++) {
					            printf("%02x ", (unsigned char)buf[i]);
						        }
				        printf("\n");

					    printf("  Class:   ");
					        if (buf[4] == 1) {
							        printf("ELF32\n");
								    } else if (buf[4] == 2) {
									            printf("ELF64\n");
										        } else {
												        printf("Invalid class\n");
													    }

						    printf("  Data:    ");
						        if (buf[5] == 1) {
								        printf("2's complement, little endian\n");
									    } else if (buf[5] == 2) {
										            printf("2's complement, big endian\n");
											        } else {
													        printf("Invalid data encoding\n");
														    }

							    printf("  Version: ");
							        printf("%d%s\n", buf[6], buf[6] == 1 ? " (current)" : "");

								    printf("  OS/ABI:  ");
								        if (buf[7] == 0) {
										        printf("UNIX - System V\n");
											    } else if (buf[7] == 3) {
												            printf("Linux\n");
													        } else {
															        printf("Other\n");
																    }

									    printf("  ABI Version: ");
									        printf("%d\n", buf[8]);

										    printf("  Type:    ");
										        if (buf[16] == 1) {
												        printf("REL (Relocatable file)\n");
													    } else if (buf[16] == 2) {
														            printf("EXEC (Executable file)\n");
															        } else if (buf[16] == 3) {
																	        printf("DYN (Shared object file)\n");
																		    } else {
																			            printf("Other\n");
																				        }

											    if (buf[4] == 2) {
												            u64 = *(uint64_t*)(buf + 24 + 8);
													        } else {
															        u32 = *(uint32_t*)(buf + 24);
																        u64 = (uint64_t)u32;
																	    }
											        printf("  Entry point address: ");
												    printf("0x%" PRIx64 "\n", u64);
}
