#include "LIB/neslib.h"
#include "LIB/nesdoug.h" 
#include "MMC3/mmc3_code.h"
#include "MMC3/mmc3_code.c"

 
#pragma bss-name(push, "ZEROPAGE")
#pragma bss-name(pop)

unsigned char irq_array[32];
unsigned char double_buffer[32];

#pragma bss-name(push, "XRAM")
#pragma bss-name(pop)

#pragma rodata-name ("BANK0")
#pragma code-name ("BANK0")

#pragma rodata-name ("BANK1")
#pragma code-name ("BANK1")

#pragma rodata-name ("BANK2")
#pragma code-name ("BANK2")

#pragma rodata-name ("BANK3")
#pragma code-name ("BANK3")

#pragma rodata-name ("BANK4")
#pragma code-name ("BANK4")

#pragma rodata-name ("BANK5")
#pragma code-name ("BANK5")

#pragma rodata-name ("BANK6")
#pragma code-name ("BANK6")

#pragma rodata-name ("BANK7")
#pragma code-name ("BANK7")

#pragma rodata-name ("BANK8")
#pragma code-name ("BANK8")

#pragma rodata-name ("BANK9")
#pragma code-name ("BANK9")

#pragma rodata-name ("BANK10")
#pragma code-name ("BANK10")

#pragma rodata-name ("BANK11")
#pragma code-name ("BANK11")

#pragma rodata-name ("BANK12")
#pragma code-name ("BANK12")

#pragma rodata-name ("BANK13")
#pragma code-name ("BANK13")

#pragma rodata-name ("BANK14")
#pragma code-name ("BANK14")

#pragma rodata-name ("BANK15")
#pragma code-name ("BANK15")

#pragma rodata-name ("BANK16")
#pragma code-name ("BANK16")

#pragma rodata-name ("BANK17")
#pragma code-name ("BANK17")

#pragma rodata-name ("BANK18")
#pragma code-name ("BANK18")

#pragma rodata-name ("BANK19")
#pragma code-name ("BANK19")

#pragma rodata-name ("BANK20")
#pragma code-name ("BANK20")

#pragma rodata-name ("BANK21")
#pragma code-name ("BANK21")

#pragma rodata-name ("BANK22")
#pragma code-name ("BANK22")

#pragma rodata-name ("BANK23")
#pragma code-name ("BANK23")

#pragma rodata-name ("BANK24")
#pragma code-name ("BANK24")

#pragma rodata-name ("BANK25")
#pragma code-name ("BANK25")

#pragma rodata-name ("BANK26")
#pragma code-name ("BANK26")

#pragma rodata-name ("BANK27")
#pragma code-name ("BANK27")

#pragma rodata-name ("BANK28")
#pragma code-name ("BANK28")

#pragma rodata-name ("BANK29")
#pragma code-name ("BANK29")

#pragma rodata-name ("BANK30")
#pragma code-name ("BANK30")

#pragma rodata-name ("BANK31")
#pragma code-name ("BANK31")

#pragma rodata-name ("BANK32")
#pragma code-name ("BANK32")

#pragma rodata-name ("BANK33")
#pragma code-name ("BANK33")

#pragma rodata-name ("BANK34")
#pragma code-name ("BANK34")

#pragma rodata-name ("BANK35")
#pragma code-name ("BANK35")

#pragma rodata-name ("BANK36")
#pragma code-name ("BANK36")

#pragma rodata-name ("BANK37")
#pragma code-name ("BANK37")

#pragma rodata-name ("BANK38")
#pragma code-name ("BANK38")

#pragma rodata-name ("BANK39")
#pragma code-name ("BANK39")

#pragma rodata-name ("BANK40")
#pragma code-name ("BANK40")

#pragma rodata-name ("BANK41")
#pragma code-name ("BANK41")

#pragma rodata-name ("BANK42")
#pragma code-name ("BANK42")

#pragma rodata-name ("BANK43")
#pragma code-name ("BANK43")

#pragma rodata-name ("BANK44")
#pragma code-name ("BANK44")

#pragma rodata-name ("BANK45")
#pragma code-name ("BANK45")

#pragma rodata-name ("BANK46")
#pragma code-name ("BANK46")

#pragma rodata-name ("BANK47")
#pragma code-name ("BANK47")

#pragma rodata-name ("BANK48")
#pragma code-name ("BANK48")

#pragma rodata-name ("BANK49")
#pragma code-name ("BANK49")

#pragma rodata-name ("BANK50")
#pragma code-name ("BANK50")

#pragma rodata-name ("BANK51")
#pragma code-name ("BANK51")

#pragma rodata-name ("BANK52")
#pragma code-name ("BANK52")

#pragma rodata-name ("BANK53")
#pragma code-name ("BANK53")

#pragma rodata-name ("BANK54")
#pragma code-name ("BANK54")

#pragma rodata-name ("BANK55")
#pragma code-name ("BANK55")

#pragma rodata-name ("BANK56")
#pragma code-name ("BANK56")

#pragma rodata-name ("BANK57")
#pragma code-name ("BANK57")

#pragma rodata-name ("BANK58")
#pragma code-name ("BANK58")

#pragma rodata-name ("BANK59")
#pragma code-name ("BANK59")

#pragma rodata-name ("BANK60")
#pragma code-name ("BANK60")

#pragma rodata-name ("CODE")
#pragma code-name ("CODE")	

void main(void) {
	while (1) {}
}