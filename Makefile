CC = g++
CFLAGS = -std=c++23 -Wall -lstdc++
INCLUDE = -I include
OUTPUTDIR = build
SRC = $(shell find src -name "*.cpp")
OBJ = $(patsubst src/%.cpp, $(OUTPUTDIR)/%.o, $(SRC))
DEPS = $(OBJ:.o=.d)

compile: $(OUTPUTDIR)/main

$(OUTPUTDIR)/main: $(OBJ)
	$(CC) $(OBJ) -o $@

$(OUTPUTDIR)/%.o: src/%.cpp | $(OUTPUTDIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -MMD -MP -c $< -o $@

-include $(DEPS)

$(OUTPUTDIR):
	mkdir -p $(OUTPUTDIR)

clean:
	rm -rf $(OUTPUTDIR)

