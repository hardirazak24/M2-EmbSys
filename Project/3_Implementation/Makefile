PROJ_NAME = Water_Pumping_System

BUILD_FILE = Build

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
      FixPath = $1				
	  CC = avr-gcc
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

Burn:$(BUILD_FILE)
	$(CC) -g -Wall -Os -mmcu=atmega328  $(INC) $(SRC) -o $(call FixPath,$(BUILD_FILE)/$(PROJ_NAME).elf)

hex:$(call FixPath,$(BUILD_FILE)/$(PROJ_NAME).elf)
	$(AVR_OBJ_CPY) $(HFLAGS) $< $(call FixPath,$(BUILD_FILE)/$(PROJ_NAME).hex)

$(BUILD_FILE):
	mkdir $(BUILD_FILE)

static_check: $(SRC)
	cppcheck --enable=all $^

clean:
	rm -rf $(call FixPath,$(BUILD_FILE)/*)
