#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("Storage limits for integer types: \n");
    printf("Storage size for a char is: %d \n", sizeof(char));
    printf("Storage size for a unsigned char is: %d \n", sizeof(unsigned char));
    printf("Storage size for a signed char is: %d \n", sizeof(signed char));
    printf("\n");
    printf("Storage size for an int is: %d \n", sizeof(int));
    printf("Storage size for an unsinged int is: %d \n", sizeof(unsigned int));
    printf("Storage size for a signed int is: %d \n", sizeof(signed int));
    printf("\n");
    printf("Storage size for a long is: %d \n", sizeof(long));
    printf("Storage size for a unsigned long is: %d \n", sizeof(unsigned long));
    printf("Storage size for a unsigned long is: %d \n", sizeof(signed long));
	printf("\n");
	printf("Storage limits for floating point types: \n");
	printf("Storage size for a float is: %d \n", sizeof(float));
    printf("Storage size for a double is: %d \n", sizeof(double));
    printf("Storage size for a unsigned long is: %d \n", sizeof(long double));
	printf("\n");
	printf("Min / max values for integer types: \n");
	printf("Bytes value for a char is: %d \n", CHAR_BIT);
	printf("Min value for a char is: %d \n", CHAR_MIN);
	printf("Max value for a char is: %d \n", CHAR_MAX);
	printf("Max value for an unsigned char is: %d \n", UCHAR_MAX);
	printf("Min value for a signed char is: %d \n", SCHAR_MIN);
	printf("Max value for a signed char is: %d \n", SCHAR_MAX);
	printf("Maximum bytes size for a multi-byte character is %d \n", MB_LEN_MAX);
	printf("Min value for a short is: %d \n", SHRT_MIN);
	printf("Max value for a short is: %d \n", SHRT_MAX);
	printf("Max value for an unsigned short is: %d \n", USHRT_MAX);
	printf("Min value for an integer is: %d \n", INT_MIN);
	printf("Max value for an integer is: %d \n", INT_MAX);
	printf("Max value for an unsigned integer is: %u \n", UINT_MAX);
	printf("Min value for a long is: %ld \n", LONG_MIN);
	printf("Max value for a long is: %ld \n", LONG_MAX);
	printf("Max value for an unsigned long is: %u \n", ULONG_MAX);
	printf("\n");
	printf("Min / max values for floating point numbers: \n");
	printf("Radix: %d\n", FLT_RADIX);
	printf("Float mantissa digits: %d radix digits \n", FLT_MANT_DIG);
	printf("Float minimum and maximum values: %g, %g \n", FLT_MIN, FLT_MAX);
	printf("Double mantissa digits: %d radix digits \n", DBL_MANT_DIG);
	printf("Double min and max values: %g, %g \n", DBL_MIN, DBL_MAX);
	printf("Long double mantissa digits: %d radix digits \n", LDBL_MANT_DIG);
	printf("Long double min and max values: %Lg, %Lg \n", LDBL_MIN, LDBL_MAX);
    return 0;
}