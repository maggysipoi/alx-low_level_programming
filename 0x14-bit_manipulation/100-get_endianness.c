int get_endianness(void) {
    int num = 1;
    char* endianness = (char*)&num;

    // If the first byte is 1, it means the system is little endian
    // because the least significant byte comes first in memory.
    if (*endianness == 1) {
        return 1;  // Little endian
    } else {
        return 0;  // Big endian
    }
}

