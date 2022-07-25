#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: appended text
 *
 * Return: 1 if file exists. -1 if it fails or the file doesn't exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int fd, wrt, len = 0;

  if (!filename)
    return (-1);
  fd = open(filename, O_WRONLY | O_APPEND);
  if (fd == -1)
    return (-1);
  if (text_content != NULL)
    {
      while (text_content[len])
	len++;
      wrt = write(fd, text_content, len);
      if (wrt == -1)
	return (-1);
    }
  if (close(fd) == -1)
    return (-1);

  return (1);
}
