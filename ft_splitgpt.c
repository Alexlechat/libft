#include "libft.h"

size_t ft_count_words(const char *s, char c)
{
    size_t nb_words = 0;
    size_t i = 0;

    if (s != NULL) 
    {
        while (s[i]) 
        {    
            if (s[i] != c && (i == 0 || s[i - 1] == c)) 
            {
                nb_words++;
            }
            i++;
        }
    }
    return nb_words;
}

size_t ft_length_words(const char *s, char c, size_t index_s)
{
    size_t temp_index = index_s;

    while (s[index_s] != c && s[index_s] != '\0') 
    {
        index_s++;
    }
    return (index_s - temp_index);
}

void **ft_free_array(char **array, size_t i)
{
    size_t  k;

    k = 0;
    while (k < i) 
    {
        free(array[k]);
        k++;
    }
    free(array);
    return (NULL);
}

char **ft_split_fill(char **new_array, const char *s, char c, size_t nb_words)
{
    size_t index_s;
    size_t len_word;
    size_t i;
    size_t j;

    index_s = 0;
    i = 0;
    while (i < nb_words) 
    {
        while (s[index_s] == c) 
            index_s++; // Ignore les séparateurs
        len_word = ft_length_words(s, c, index_s);
        new_array[i] = (char *)malloc(sizeof(char) * (len_word + 1));
        if (!new_array[i])
            return (ft_free_array(new_array, i));
        j = 0;
        while (j < len_word) 
        {
            new_array[i][j] = s[index_s]; // Copie le mot
            j++;
            index_s++;
        }
        new_array[i][len_word] = '\0'; // Terminer le mot
        i++;
    }
    new_array[i] = NULL; // Terminer le tableau
    return new_array;
}

char **ft_split(const char *s, char c)
{
    if (s == NULL)
        return NULL;

    size_t nb_words = ft_count_words(s, c);
    char **new_array = (char **)malloc(sizeof(char *) * (nb_words + 1));
    if (new_array == NULL)
        return NULL;

    return ft_split_fill(new_array, s, c, nb_words);
}

int main(void)
{
    char *string = "salut je suis alex";
    char sep = ' ';
    char **split = ft_split(string, sep);

    size_t i = 0;
    while (split[i] != NULL) 
    {
        printf("%s\n", split[i]);
        free(split[i]); 
        i++;
    }
    free(split); 

    return 0;
}
