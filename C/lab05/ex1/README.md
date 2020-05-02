# Exercise 1: Binary Files
## Task Description
The tar program (for “tape archive”) creates an uncompressed file archive by joining a collection of files end to end. At the start of each file in the archive is a fixed-length header that stores information about the file, represented as a C structure as follows:
```
/*
* Standard Archive Format ‐ Standard TAR – USTAR
* from https://www.fileformat.info/format/tar/corion.htm
*/
#define RECORDSIZE 512
#define NAMSIZ 100
#define TUNMLEN 32
#define TGNMLEN 32
struct header {
    char name[NAMSIZ];
    char mode[8];
    char uid[8];
    char gid[8];
    char size[12];
    char mtime[12];
    char chksum[8];
    char linkflag;
    char linkname[NAMSIZ];
    char magic[8];
    char uname[TUNMLEN];
    char gname[TGNMLEN];
    char devmajor[8];
    char devminor[8];
};
```
For the purposes of this exercise, we only need to worry about the `name` and `size` fields. The `name` field contains the name of the file, while the `size` field contains the length of the file in bytes. Note that the size field is a string, not an integer, so it needs to be converted using `atoi()` in order to perform arithmetic on it. We can ignore all of the other other fields in our program.

A `tar` archive thus has the form:
| struct header | file1 | struct header | file2 | struct header | file3 | ... |
| :------------ | :---- | :------------ | :---- | :------------ | :---- | :-- |

The header sections always have the same length, `sizeof(struct header)`, but the length of each file is given by the `size` field in the header.

Write a program called minitar that accepts a list of filenames on the command line and creates an archive containing all of these files, with the `name` and `size` fields filled in as described above.

## Hint
- See http://www.cplusplus.com/reference/cstdio/fread/ for an example of how to find the length of a file and read it into memory. Note that reading the whole file into memory at once may require quite a lot of memory; you might like to try finding a more efficient method of copying data from the input file to the output file.