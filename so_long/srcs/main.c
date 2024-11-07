#include "../includes/so_long.h"

int close_window(t_data *game)
{
    if (game->mlx_window)
        mlx_destroy_window(game->mlx_connection, game->mlx_window);
    if (game->mlx_connection)
    {
        mlx_destroy_display(game->mlx_connection);
        free(game->mlx_connection);
    }
    exit(0);
    return (0); 
}

int handle_key(int keycode, t_data *game)
{
    if (keycode == ESC_KEY | keycode == Q)
        close_window(game);
    return (0);
}

int main(void)
{
    t_data game;

    game.mlx_connection = mlx_init();
    if (!game.mlx_connection)
        return (1);
    game.mlx_window = mlx_new_window(game.mlx_connection, 600, 500, "test");
    if (!game.mlx_window)
    {
        mlx_destroy_display(game.mlx_connection);
        free(game.mlx_connection);
        return (1);
    }

    mlx_hook(game.mlx_window, 2, 1L<<0, ((int (*)())handle_key), &game);
    mlx_hook(game.mlx_window, 17, 0, (int (*)())close_window, &game);

    mlx_loop(game.mlx_connection);

    free(game.mlx_connection);
    return (0);
}


