#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @def CHOICEMSG
 * @brief Choice message
 */
#define CHOICEMSG    \
  "1 - Addition\n"   \
  "2 - Extraction\n" \
  "3 - Divide\n"     \
  "4 - Multiply\n"   \
  "5 - Exit\n"

/**
 * @def ERROR
 * @brief Error declare
 */
#define ERROR 'E'

/**
 * @fn input
 * @brief get user input
 * @param msg Input message
 * @return Input from user
 */
char* input(char* msg) {
  printf("%s", msg);                         // Print input message
  char* input = calloc(1024, sizeof(char));  // Input buffer
  fgets(input, 1024, stdin);                 // Get input from user
  input[strlen(input) - 1] = '\0';           // Remove \n
  return input;
}

/**
 * @fn processCommand
 * @brief Command convert to integer
 * @param command Command to convert
 * @return Integer value as command
 */
int processCommand(char* command) {
  if (strlen(command) == 0)  // If command is empty
    goto error;              // Goto error tag
  for (int index = command[0] == '-' ? 1 : 0; index < strlen(command);
       index++) {
    char ch = command[index];  // Get current char
    if (ch != '0' && ch != '1' && ch != '2' && ch != '3' && ch != '4' &&
        ch != '5' && ch != '6' && ch != '7' && ch != '8' &&
        ch != '9') {  // If current char is not number
      goto error;     // Goto error tag
    }
  }
  int result;                  // Define result
  if (command[0] == '-' == 1)  // If value is negative
    result = atoi(command + 1) *
             -1;  // Remove negative mark and convert to negative integer
  else
    result = atoi(command);  // Convert to integer
  return result;             // Return result
error:
  printf("%s", "Please type only integer!\n");  // Print error message
  return ERROR;                                 // Return error char
}

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
repeat:
  printf(CHOICEMSG);  // Print choice message
  long val = processCommand(
      input("Please type your choice: "));  // Get choice from user and process
  if (val == ERROR)                         // If value is error declare
    goto repeat;                            // Goto repeat tag
  else if (val == 5)                        // If val equals to 5
    goto exit;                              // Goto exit tag

  if (val != 1 && val != 2 && val != 3 &&
      val != 4) {  // If val is not equals to 1 or 2 or 3 or 4
    printf("%s\n", "Process not found!");  // Print error message
    goto repeat;                           // Goto repeat tag
  }

  int number1 =
      processCommand(input("Plase input first number: "));  // Get first number
  if (number1 == ERROR)  // If number1 is error declare
    goto repeat;         // Goto repeat tag
  int number2 = processCommand(
      input("Plase input secondary number: "));  // Get secondary number
  if (number2 == ERROR)                          // If number2 is error declare
    goto repeat;                                 // Goto repeat tag

  if (val == 1)                                 // If val equals to 1
    printf("Result: %d\n", number1 + number2);  // Print result
  else if (val == 2)                            // If val equals to 2
    printf("Result: %d\n", number1 - number2);  // Print result
  else if (val == 3) {                          // If val equals to 3
    if (number1 == 0 || number2 == 0)  // If number1 or number2 equals to 0
      printf("Numbers are cannot zero in divide!\n");  // Print error message
    else
      printf("Result: %d\n", number1 / number2);  // Print result
  } else if (val == 4)                            // If val equals to 4
    printf("Result: %d\n", number1 * number2);    // Print result
  else
    printf("%s\n", "Process not found!");  // Print error message

  goto repeat;  // Repeat process
exit:
  return 0;  // Exit with 0
}
