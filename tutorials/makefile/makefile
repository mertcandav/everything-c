# Inline comment

# Multiline \
	comment


#################################################
################### VARIABLES ###################
#################################################

# Classic type
var1 = value

# Define type
define var2
value
endef

# Multiline
define var3
value1 \
value2 \
...
endef

# Add value to defined variable
var1 := value

# Set variable value by another variable
var1 = $(var2)

#################################################
################### WORKFLOWS ###################
#################################################

flow: work1 work2 work3 ...

work1: parameter
	shell command

# Get parameter value
work: src/main
	$<
# $< = src/main

#################################################
################## CONDITIONS ###################
#################################################

ifeq ($(OS),Windows_NT) # If platform is WindowsNT
	...
# If not
else
	...
endif # End of if block
