
int strlength(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        i++;
    }
    return i;
}
void strconcat(char *str1, char *str2)
{
    int i = 0;
    int j = strlength(str1);
    while (str2[i] != 0)
    {
        str1[j + i] = str2[i];
        i++;
    }
    str1[j + i] = 0;
}
int strcompare(char *str1, char *str2)
{
    int len1 = strlength(str1);
    int len2 = strlength(str2);
    int len;
    if (len1 > len2)
        len = len2;
    else
        len = len1;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] > str2[i])
            return 1;
        else if (str1[i] < str2[i])
            return -1;
    }
    return 0;
}