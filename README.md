# 🏆 Programación Competitiva

Repositorio personal de soluciones a problemas de programación competitiva de diversas plataformas.

## 📚 Plataformas

Este repositorio contiene soluciones de las siguientes plataformas:

- [Codeforces](https://codeforces.com/)
- [SPOJ](https://www.spoj.com/)
- [CSES Problem Set](https://cses.fi/problemset/)
- [AtCoder](https://atcoder.jp/)
- [LeetCode](https://leetcode.com/)
- [UVa Online Judge](https://onlinejudge.org/)
- Otras plataformas

## 🗂️ Estructura del Repositorio

```
.
├── codeforces/         # Soluciones de Codeforces
├── spoj/              # Soluciones de SPOJ
├── cses/              # Soluciones de CSES Problem Set
│   ├── introductory/
│   │   ├── weird_algorithm.cpp
│   │   ├── weird_algorithm.md
│   │   ├── missing_number.cpp
│   │   └── missing_number.md
│   ├── sorting/
│   ├── dynamic_programming/
│   ├── graph/
│   └── README.md
├── atcoder/           # Soluciones de AtCoder
├── leetcode/          # Soluciones de LeetCode
└── otros/             # Otros problemas y prácticas
```

### Convención de Nombres para CSES

Cada problema incluye dos archivos:
- `nombre_problema.cpp` (o `.c`) - La solución
- `nombre_problema.md` - Documentación del problema (enunciado, approach, complejidad)

**Ejemplo de `weird_algorithm.md`:**
```markdown
# Weird Algorithm

**Dificultad:** Fácil  
**Link:** https://cses.fi/problemset/task/1068

## Problema
Consider an algorithm that takes as input a positive integer n...

## Solución
Implementación directa siguiendo las reglas del problema.

**Complejidad:** O(steps)
**Tags:** simulation, implementation
```

## 🛠️ Compilación y Ejecución

### Compilar un archivo C++

```bash
g++ -std=c++17 -O2 -Wall archivo.cpp -o archivo
```

### Ejecutar

```bash
./archivo < input.txt
```

### Con opciones de depuración

```bash
g++ -std=c++17 -g -Wall -Wextra -Wshadow -DLOCAL archivo.cpp -o archivo
```

## 📝 Convenciones de Código

- **Nomenclatura:** Snake_case para nombres de archivos (`two_knights.cpp`)
- **Documentación:** Cada `.cpp` tiene su `.md` correspondiente con:
  - Link al problema original
  - Descripción breve
  - Approach/estrategia utilizada
  - Complejidad temporal y espacial
  - Tags relevantes
- **Comentarios:** El código incluye comentarios para partes no triviales
- **Organización:** Los problemas se agrupan por categoría según la plataforma

## 🎯 Temas Cubiertos

- **Estructuras de Datos**: Arrays, Listas, Pilas, Colas, Árboles, Grafos, Segment Trees, etc.
- **Algoritmos**: Búsqueda, Ordenamiento, Programación Dinámica, Greedy, Backtracking
- **Matemáticas**: Teoría de Números, Combinatoria, Geometría Computacional
- **Grafos**: DFS, BFS, Dijkstra, Floyd-Warshall, MST, Flujo Máximo
- **Strings**: KMP, Z-Algorithm, Hashing, Trie
- Y más...

## 📈 Progreso

| Plataforma | Problemas Resueltos |
|------------|---------------------|
| Codeforces | - |
| SPOJ       | - |
| CSES       | - |
| AtCoder    | - |
| LeetCode   | - |

## 🔗 Enlaces Útiles

### Recursos de Aprendizaje
- [CP-Algorithms](https://cp-algorithms.com/)
- [USACO Guide](https://usaco.guide/)
- [Competitive Programmer's Handbook](https://cses.fi/book/book.pdf)
- [GeeksforGeeks](https://www.geeksforgeeks.org/)

### Herramientas
- [Competitive Companion](https://github.com/jmerle/competitive-companion) - Extensión para parsear problemas
- [CF Tool](https://github.com/xalanq/cf-tool) - CLI para Codeforces
- [cpeditor](https://cpeditor.org/) - Editor especializado para CP

## 📄 Licencia

Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## ✨ Notas

Este repositorio es principalmente para práctica personal y aprendizaje. Las soluciones pueden no ser las más óptimas, pero están abiertas a mejoras y sugerencias.

---

**Última actualización:** Febrero 2026
