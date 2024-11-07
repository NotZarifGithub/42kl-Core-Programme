#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include "../libft/libft.h"
# include <stddef.h>
# include <stdlib.h>

# define ESC_KEY 65307
# define Q 113

typedef struct s_data {
    void *mlx_connection;
    void *mlx_window;
} t_data;

int main(void);

#endif // ! SO_LONG_H
