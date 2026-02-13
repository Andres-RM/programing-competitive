# Weird Algorithm

**Dificultad:** Fácil  
**Link:** https://cses.fi/problemset/task/1068  
**Categoría:** Introductory Problems

## Problema

Dado un número entero positivo `n`, se debe realizar el siguiente algoritmo:
- Si `n` es par, dividirlo entre 2
- Si `n` es impar, multiplicarlo por 3 y sumarle 1
- Repetir hasta que `n` sea 1

Imprimir todos los valores de `n` durante el proceso.

## Entrada

Una sola línea con un entero `n` (1 ≤ n ≤ 10^6)

## Salida

Imprimir todos los valores en el proceso de la secuencia, separados por espacios.

## Ejemplos

**Input:**
```
3
```

**Output:**
```
3 10 5 16 8 4 2 1
```

## Solución

La solución es directa: simplemente simular el proceso descrito en el problema.

### Approach

1. Leer el valor de `n`
2. Mientras `n` no sea 1:
   - Imprimir `n`
   - Si `n` es par: `n = n / 2`
   - Si `n` es impar: `n = 3 * n + 1`
3. Imprimir 1

### Complejidad

- **Temporal:** O(steps) - depende de cuántos pasos tome llegar a 1
- **Espacial:** O(1)

### Tags

`simulation`, `implementation`, `math`

## Notas

La conjetura de Collatz (relacionada con este problema) es un problema abierto en matemáticas que plantea que esta secuencia siempre llega a 1 para cualquier número positivo inicial, aunque no se ha demostrado formalmente.
