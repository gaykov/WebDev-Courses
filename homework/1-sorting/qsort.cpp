void qsort (int b, int e)
{
  int l = b, r = e;
  int piv = arr[(l + r) / 2];
  while (l <= r)
  {
    while (arr[l] < piv)
      l++;
    while (arr[r] > piv)
      r--;
    if (l <= r)
      swap (arr[l++], arr[r--]);
  }
  if (b < r)
    qsort (b, r);
  if (e > l)
    qsort (l, e);
}