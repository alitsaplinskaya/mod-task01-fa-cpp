unsigned int faStr1(const char *str)
{
    int i = 0;
    int j = 0;
    bool flag = 0;
    bool k = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && !flag)
        {
            flag = 1;
            k = 1;
        }
        if (str[i] == ' ' && flag)
        {
            flag = 0;
            if (k == 1)
                j++;
        }
        if (flag && str[i] > 47 && str[i] < 58)
            k = 0;
        i++;
    }
    if (str[i - 1] != ' ')
        if (k)
            j++;
    return j;
}
unsigned int faStr2(const char *str)
{
    int i = 0;
    int j = 0;
    bool flag = 0;
    bool k = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && !flag)
        {
            flag = 1;
            if (str[i] > 64 && str[i] < 91)
            {
                k = 1;
                i++;
            }
        }
        if (str[i] == ' ' && flag)
        {
            flag = 0;
            if (k)
                j++;
        }
        if (flag && (str[i] < 97 || str[i] > 122))
            k = 0;
        i++;
    }
    if (str[i - 1] != ' ')
        if (k)
            j++;
    return j;
}
unsigned int faStr3(const char *str)
{
    double sum = 0.0;
    int i = 0;
    int j = 0;
    bool flag = 0;
    int k = 0;

    while (str[i] != '\0')
    {
        if (!flag && str[i] != ' ')
        {
            flag = 1;
            k++;
            j++;
        }
        else if (flag && str[i] != ' ')
            k++;
        else
        {
            flag = 0;
            sum += k;
            k = 0;
        }
        i++;
    }
    if (flag)
        sum += k;
    sum /= j;
    int sum1 = sum;
    if (sum - sum1 >= 0.5)
        sum1++;

    return sum1;

}