#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - displays all magic bytes in ELF
 * @h: header of ELF
 */
void print_magic(Elf64_Ehdr h)
{
	int pm;

	printf(" Magic:  ");
	for (pm = 0; pm < EI_NIDENT; PM++)
		printf("%2.2x%s", h.e_ident[pm], pm == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - displays class in ELF
 * @h: header of ELF
 */
void print_class(Elf64_Ehdr h)
{
	printf(" Class:                ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("NONE");
		break;
	}
	printf("\n");
}

/**
 * print_data - displays data in ELF
 * @h: header of ELF
 */
void print_data(Elf64_Ehdr h)
{
	printf(" Data:                               ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - displays the version of ELF
 * @h: header of ELF
 */
void print_version(Elf64_Ehdr h)
{
	printf("  version:                       %d, h.e_ident[EI_VERSION]");
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - displays the ELF osabi
 * @h: header of ELF
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                     ");
	switch (h.e_ident[EI_OSABI])

