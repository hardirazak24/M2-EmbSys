PROJ_NAME = Water_Pumping_System

SIMULATION = simulation

SRC = src/project_main.c\
src/Relay.c\
src/Switch.c\

HFLAGS = -j .text -j .data -O ihex
INC = -I inc

ifdef OS	
   FixPath = $(subst /,\,$1)
   CC = avr-gcc.exe
   AVR_OBJ_CPY = avr-objcopy.exe
else 
   ifeq ($(shell uname), Linux)
	  RM = rm -rf
      FixPath = $1				
	  CC = avr-gcc
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

Burn:$(SIMULATION)
	$(CC) -g -Wall -Os -mmcu=atmega328  $(INC) $(SRC) -o $(call FixPath,$(SIMULATION)/$(PROJ_NAME).elf)

hex:$(call FixPath,$(SIMULATION)/$(PROJ_NAME).elf)
	$(AVR_OBJ_CPY) $(HFLAGS) $< $(call FixPath,$(SIMULATION)/$(PROJ_NAME).hex)

$(SIMULATION):
	mkdir $(SIMULATION)

static_check: $(SRC)
	cppcheck --enable=all $^

clean:
	$(RM) $(call FixPath,$(SIMULATION)/*.elf)	
