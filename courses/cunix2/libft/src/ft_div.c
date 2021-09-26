typedef struct {
  int quot;
  int rem;
} div_t;

div_t ft_div(int num, int denom){
  div_t result;

  result.quot = num / denom;
  result.rem = num % denom;
  /*
  if (num >= 0 && result.rem < 0)
    {
      ++result.quot;
      result.rem -= denom;
    }*/

  return result;
}