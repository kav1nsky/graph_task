# Представление графов

### CArcGraph
Граф на списке рёбер. Реализация: вектор пар `std::vector<std::pair<int, int>>`

### CSetGraph
Граф списке смежности. Реализация: вектор сетов `std::vector<std::set<int>>` .

### CMatrixGraph
Граф на матрице смежности. Реализация: вектор векторов _[i, j] = 1 если есть ребро (i, j)_ `std::vector<std::vector<int>>`

### CListGraph
Граф на списке смежности. Реализация: вектор векторов `std::vector<std::vector<int>>`
