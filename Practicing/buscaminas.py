import random

# Función para inicializar el tablero
def initialize_board(rows, cols):
    return [[' ' for _ in range(cols)] for _ in range(rows)]

# Función para colocar minas de forma aleatoria en el tablero
def place_mines(board, num_mines):
    rows, cols = len(board), len(board[0])
    mines_placed = 0
    while mines_placed < num_mines:
        row = random.randint(0, rows - 1)
        col = random.randint(0, cols - 1)
        if board[row][col] != '*':
            board[row][col] = '*'
            mines_placed += 1

# Función para imprimir el tablero
def print_board(board):
    for row in board:
        print(' | '.join(row))
        print('-' * (4 * len(row) - 1))

# Función para contar el número de minas adyacentes a una celda
def count_adjacent_mines(board, row, col):
    rows, cols = len(board), len(board[0])
    count = 0
    for i in range(max(0, row - 1), min(rows, row + 2)):
        for j in range(max(0, col - 1), min(cols, col + 2)):
            if board[i][j] == '*':
                count += 1
    return count

# Función para descubrir una celda
def uncover_cell(board, row, col):
    if board[row][col] == '*':
        return False
    elif board[row][col] == ' ':
        num_mines = count_adjacent_mines(board, row, col)
        board[row][col] = str(num_mines) if num_mines > 0 else '-'
    return True

# Función para verificar si el jugador ha ganado
def check_win(board):
    for row in board:
        for cell in row:
            if cell == ' ':
                return False
    return True

# Función principal para ejecutar el juego
def play_game():
    rows, cols = 10, 10
    num_mines = 15
    board = initialize_board(rows, cols)
    place_mines(board, num_mines)
    game_over = False

    print("¡Bienvenido al juego de Buscaminas!")
    print("Puedes seleccionar una celda escribiendo las coordenadas (fila, columna). Por ejemplo: '3,5'")
    print_board(board)

    while not game_over:
        move = input("Selecciona una celda (fila, columna): ")
        try:
            row, col = map(int, move.split(','))
            if row < 0 or row >= rows or col < 0 or col >= cols:
                print("¡Coordenadas fuera de rango! Inténtalo de nuevo.")
                continue
            if not uncover_cell(board, row, col):
                print("¡Has encontrado una mina! ¡Juego terminado!")
                print("La ubicación de las minas era:")
                print_board(board)
                game_over = True
            else:
                print_board(board)
                if check_win(board):
                    print("¡Felicidades! ¡Has ganado!")
                    game_over = True
        except ValueError:
            print("Entrada inválida. Por favor, introduce las coordenadas como números separados por coma.")

# Ejecutar el juego
if __name__ == "__main__":
    play_game()
