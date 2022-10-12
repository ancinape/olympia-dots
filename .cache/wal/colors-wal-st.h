const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#faf0ee", /* black   */
  [1] = "#9F422A", /* red     */
  [2] = "#AF4D2A", /* green   */
  [3] = "#CD6926", /* yellow  */
  [4] = "#D16D24", /* blue    */
  [5] = "#9B5272", /* magenta */
  [6] = "#E58425", /* cyan    */
  [7] = "#0C0A2D", /* white   */

  /* 8 bright colors */
  [8]  = "#886056",  /* black   */
  [9]  = "#9F422A",  /* red     */
  [10] = "#AF4D2A", /* green   */
  [11] = "#CD6926", /* yellow  */
  [12] = "#D16D24", /* blue    */
  [13] = "#9B5272", /* magenta */
  [14] = "#E58425", /* cyan    */
  [15] = "#0C0A2D", /* white   */

  /* special colors */
  [256] = "#faf0ee", /* background */
  [257] = "#0C0A2D", /* foreground */
  [258] = "#0C0A2D",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
