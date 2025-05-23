# Libft

Libft est une bibliothèque de fonctions en C réécrites dans le cadre du cursus de l'École 42.  
Elle vise à recréer un ensemble de fonctions standards de la bibliothèque C ainsi que quelques utilitaires supplémentaires.  
Ce projet est une introduction à la programmation bas-niveau, à la rigueur du code en C, et aux bonnes pratiques de développement.

## 📚 Objectifs pédagogiques

- Reproduire des fonctions standard de la `libc` (ex: `strlen`, `strcpy`, `memset`, etc.)
- Comprendre le fonctionnement de la mémoire en C
- Développer une bibliothèque réutilisable
- Appliquer les normes de codage 42 (Norminette)

## 🔧 Contenu de la librairie

Libft est divisée en plusieurs catégories :

### Fonctions de la libc
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, etc.

### Fonctions supplémentaires
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`

### Fonctions de gestion mémoire
- `ft_calloc`, `ft_strdup`

### Fonctions sur les caractères
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`

### Fonctions sur les listes chaînées (bonus)
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## 🧪 Compilation

```bash
make        # Compile la librairie
make clean  # Supprime les fichiers objets
make fclean # Supprime les fichiers objets et l’archive libft.a
make re     # Fclean + make
