# MÉTODOS NUMÉRICOS EN INGENIERÍA
**Clave:** 1151039 | **Trimestre:** 26-O  
**Carrera:** Ingeniería Mecánica  
**Alumno:** Joel Sierra Saucedo | **Matrícula:** 2253003817  
**Profesor:** Gabriel Hurtado Avilés  

---

## 1. Conceptos Fundamentales de los Métodos Numéricos

### ¿Qué son los métodos numéricos?
Los métodos numéricos son procedimientos matemáticos que permiten obtener soluciones aproximadas a problemas que no siempre pueden resolverse de manera exacta mediante operaciones algebraicas. Se utilizan para:
* Encontrar raíces de ecuaciones.
* Resolver sistemas de ecuaciones.
* Calcular integrales.
* Aproximar soluciones de ecuaciones diferenciales.

Estos métodos permiten abordar problemas matemáticos mediante algoritmos que producen resultados numéricos.

### ¿En qué se distinguen de una solución analítica?
Una solución analítica se obtiene mediante expresiones matemáticas exactas, mientras que un método numérico genera una aproximación a partir de cálculos sucesivos. Esta diferencia es importante porque muchos problemas reales presentan ecuaciones complejas o condiciones que dificultan encontrar una solución cerrada.

### ¿Por qué su resultado es aproximado?
El resultado numérico es aproximado debido a factores como:
* El **truncamiento** de procesos matemáticos.
* El **redondeo** de los números en la computadora.
* Las **tolerancias** establecidas para detener un algoritmo iterativo.

El error representa la diferencia entre el valor aproximado y el valor exacto o de referencia; analizarlo permite evaluar la precisión del resultado y determinar si es suficiente para el problema de estudio.

---

## 2. Aplicaciones en Ingeniería Mecánica

En ingeniería mecánica, los métodos numéricos permiten estudiar sistemas físicos cuyo comportamiento depende de múltiples variables y condiciones de operación. Son especialmente útiles cuando las ecuaciones que describen un fenómeno no tienen solución analítica sencilla o cuando es necesario trabajar con geometrías y condiciones reales.

### Ejemplos Concretos:
1. **Transferencia de calor en componentes mecánicos (e.g., cilindro de un motor):**
   * **Objetivo:** Conocer cómo cambia la temperatura según la posición, el tiempo, las propiedades del material y las condiciones de frontera.
   * **Aplicación:** Cuando la geometría es compleja o las condiciones térmicas varían, la ecuación de conducción de calor se resuelve mediante métodos numéricos.
2. **Análisis de vibraciones mecánicas:**
   * **Objetivo:** Determinar las frecuencias naturales y la respuesta vibratoria de un sistema formado por masas, resortes y amortiguadores (como la suspensión de un vehículo o una máquina industrial).
   * **Aplicación:** Se calculan las frecuencias de vibración y los desplazamientos del sistema a partir de sus propiedades físicas.

---

## 3. Herramientas Generales para Métodos Numéricos

| Categoría | Descripción / Ejemplos |
|---|---|
| **Lenguajes compilados (C, C++, Fortran)** | Proporcionan máxima velocidad de ejecución y control directo de memoria, siendo el estándar para simulación de alto rendimiento. |
| **Lenguajes interpretados** | Priorizan la rapidez de desarrollo y prototipado a costa de una menor velocidad de ejecución directa. |
| **Entornos matriciales (MATLAB, GNU Octave)** | Diseñados específicamente para manipular vectores y matrices de forma nativa e intuitiva. |
| **Python científico (NumPy, SciPy, Matplotlib)** | Lenguaje de propósito general complementado con bibliotecas eficientes en C/Fortran para cálculo matricial, funciones numéricas avanzadas y visualización de datos. |
| **Álgebra simbólica (CAS)** | Herramientas orientadas a la manipulación algebraica y derivación exacta de fórmulas (ej. MAPLE). |
| **Bibliotecas base (BLAS, LAPACK)** | Rutinas subyacentes altamente optimizadas para operaciones fundamentales de álgebra lineal en las que se apoya la mayoría del software científico. |

> **Nota bibliográfica:** *Burden y Faires (2011)* integra código y lenguajes compilados como C y Fortran, además de software computacional como MATLAB y MAPLE. Por otro lado, *Chapra y Canale* fundamenta sus ejemplos e implementaciones en MATLAB, VBA (Excel), C y C++.

---

## 4. Herramient

¿Por qué 0.1 + 0.2 no da 0.3?

Las computadoras guardan los números en binario (ceros y unos). En binario, los números **0.1** y **0.2** no se pueden escribir de forma exacta; son infinitos (como cuando intentamos escribir 1/3 = 0.3333... en decimal).

Como la memoria del procesador es finita, la computadora recorta y redondea ligeramente esos números. Al sumar ambos valores recortados, el resultado exacto en memoria termina siendo:

0.30000000000000004

¿Coinciden C, Python y Octave?

**Sí, los tres lenguajes hacen exactamente la misma matemática interna** porque dependen del mismo procesador. La única diferencia es cómo decide mostrar el resultado cada lenguaje en la pantalla:

| Lenguaje | Resultado en Consola | ¿Por qué cambia la vista? |
|---|---|---|
| **Python** | `0.30000000000000004` | Muestra el valor con la imprecisión real por defecto. |
| **C** | `0.30000000000000004` | Muestra la imprecisión si le pides imprimir muchos decimales (`%.17f`). |
| **Octave** | `0.30000000000000004` | Por defecto lo esconde como `0.30000`, pero con `format long` muestra el número real. |

REFERENCIAS
Burden, R.L.,& Faires, J.D. (2011). Análisis numérico (9a ed.). Cengage Learning.
Chapra, S.C., & Canale, R.P.(2015). Métodos Numéricos para ingenieros (7a ed.). McGraw-Hill. 
