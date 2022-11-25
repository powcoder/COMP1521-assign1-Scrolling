https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// COMP1521 18s2 Assignment 1
// 9x9 versions of upper- and lower-case letters
// Put in a *.h file to keep csroll.c a bit cleaner

typedef char OneChar[CHRSIZE][CHRSIZE];

OneChar all_chars[52] =
{
  {
    {' ',' ',' ','#','#','#',' ',' ',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },
  {
    {' ','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },
  {
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },
  {
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
  },
  {
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
  },
  {
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ','#',' ',' '},
    {'#',' ',' ',' ',' ','#',' ',' ',' '},
    {'#','#','#','#','#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ','#',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ','#',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#',' ',' ',' ',' ',' ','#','#'},
    {'#',' ','#',' ',' ',' ','#',' ','#'},
    {'#',' ',' ','#',' ','#',' ',' ','#'},
    {'#',' ',' ',' ','#',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ','#',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ','#',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ','#',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ','#',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ','#',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {' ','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },
  {
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
  },
  {
    {' ','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ','#',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ','#',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ','#',' '},
    {' ','#','#','#','#','#','#',' ','#'},
  },
  {
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ','#',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ','#',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },
  {
    {'#','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ',' ',' ','#','#','#',' ',' ',' '},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ','#',' ',' ',' ','#'},
    {' ','#',' ','#',' ','#',' ','#',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ',' ',' ','#',' ','#',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ','#',' ','#',' ',' ',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ',' ',' ','#',' ','#',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
  },
  {
    {'#','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ',' ',' ',' ','#',' '},
    {' ',' ',' ',' ',' ',' ','#',' ',' '},
    {' ',' ',' ',' ',' ','#',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ','#',' ',' ',' ',' ',' '},
    {' ',' ','#',' ',' ',' ',' ',' ',' '},
    {' ','#',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
  },
  {
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },  
  {
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },  
  {
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ','#',' '},
    {'#','#','#','#','#','#','#',' ',' '},
    {'#',' ',' ',' ',' ',' ','#',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {'#',' ','#',' ',' ',' ','#',' ','#'},
    {'#',' ',' ','#',' ','#',' ',' ','#'},
    {'#',' ',' ',' ','#',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ','#','#','#','#','#',' ',' '},
    {'#','#',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
  },  
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
  },  
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ','#','#','#','#','#','#','#',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },  
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ','#',' ',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ',' ',' ','#',' ','#',' ',' ',' '},
    {' ',' ',' ',' ','#',' ',' ',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ','#',' ',' ',' ','#'},
    {' ','#',' ','#',' ','#',' ','#',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
  },
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {' ',' ','#','#','#','#','#',' ',' '},
    {' ',' ','#',' ',' ',' ','#',' ',' '},
    {' ','#',' ',' ',' ',' ',' ','#',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
  },  
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#',' '},
  },  
  {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
    {' ',' ',' ',' ',' ',' ',' ','#',' '},
    {' ',' ',' ','#','#','#','#',' ',' '},
    {' ',' ','#',' ',' ',' ',' ',' ',' '},
    {' ','#',' ',' ',' ',' ',' ',' ',' '},
    {'#','#','#','#','#','#','#','#','#'},
  }
};
