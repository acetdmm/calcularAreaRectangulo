
# Código para Calcular el Área de un Rectángulo

Este programa en C++ permite calcular el área de un rectángulo a partir de su base y altura ingresadas por el usuario.

## Descripción del Código

### Estructura General
1. **Declaración de una función**:
   - `calcularAreaRectangulo(double base, double altura)`
     - Esta función toma dos argumentos (base y altura) y devuelve el producto de ambos, que corresponde al área del rectángulo.

2. **Función principal (`main`)**:
   - Solicita al usuario que ingrese los valores de la base y la altura.
   - Llama a la función `calcularAreaRectangulo` con los valores ingresados.
   - Muestra el resultado en la consola.

### Detalles del Código
- Se usa la biblioteca `<iostream>` para manejar la entrada y salida de datos.
- Las variables `base` y `altura` se declaran como `double` para admitir valores con decimales.
- El cálculo del área se realiza en la función `calcularAreaRectangulo` para mantener el código modular y legible.

### Flujo de Ejecución
1. El programa solicita al usuario que ingrese la base del rectángulo.
2. Luego, solicita la altura del rectángulo.
3. Con estos datos, llama a la función `calcularAreaRectangulo` y almacena el resultado.
4. Finalmente, muestra el área calculada en la consola.

## Ejemplo de Ejecución

**Entrada del Usuario:**

```
Ingrese la base del rectangulo: 5
Ingrese la altura del rectangulo: 10
```

**Salida en Consola:**

```
El area del rectangulo es: 50
```

## Uso

Para compilar y ejecutar este programa:

1. Guarda el código en un archivo con extensión `.cpp`, por ejemplo, `calcularAreaRectangulo.cpp`.
2. Usa un compilador de C++, como `g++`, para compilar el programa:
   ```
   g++ calcularAreaRectangulo.cpp -o calcularAreaRectangulo
   ```
3. Ejecuta el programa:
   ```
   ./calcularAreaRectangulo
   ```

## Notas

- El programa asume que los valores ingresados son números válidos.
- Si se ingresa un valor no numérico, el comportamiento del programa es indefinido (puede fallar).

Este programa es una demostración básica del cálculo de un área utilizando conceptos simples de programación en C++.
