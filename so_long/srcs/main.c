#include <mlx.h>
#include <stddef.h>
#include <stdlib.h>

int main(void)
{
    void    *mlx_connection;
    void    *mlx_window;    

    mlx_connection = mlx_init();
    if (!mlx_connection)
        return (1);
    mlx_window = mlx_new_window(mlx_connection, 600, 500, "test");
    if (!mlx_window)
    {
        mlx_destroy_display(mlx_connection);
        free(mlx_connection);
        return (1);
    }

    mlx_loop(mlx_connection);

    mlx_destroy_window(mlx_connection, mlx_window);
    mlx_destroy_display(mlx_connection);
  
    free(mlx_connection);
    return (0);
}


