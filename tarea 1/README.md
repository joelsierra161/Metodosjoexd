METODOS NUMERICOS EN INGENIERIA (CLAVE:1151039)
Trimestre 26-O
Carrera: Ingeniería mecánica
Joel Sierra Saucedo. Matricula: 2253003817
Profesor: Gabriel Hurtado Aviles 

1 - ¿QUE SON LOS METODOS NUMERICOS?
Los métodos numéricos son procedimientos matemáticos que permiten obtener soluciones aproximadas a problemas que no siempre pueden resolverse de manera exacta mediante operaciones algebraicas. Se utilizan para encontrar raíces de ecuaciones, resolver sistemas de ecuaciones, calcular integrales y aproximar soluciones de ecuaciones diferenciales, estos métodos permiten abordar problemas matemáticos mediante algoritmos que producen resultados numéricos. 
 ¿EN QUE SE DISTINGUEN DE UNA SOLUCION ANALITICA?
Una solución analítica se obtiene mediante expresiones matemáticas exactas, mientras que un método numérico genera una aproximación a partir de cálculos sucesivos, esta diferencia es importante porque muchos problemas reales presentan ecuaciones complejas o condiciones que dificultan encontrar una solución cerrada. 
 ¿POR QUE SU RESULTADO ES APROXIMADO?
El resultado numéricos es aproximado debido a factores como el truncamiento de procesos matemáticos, el redondeo de los números en la computadora y las tolerancias establecidas para detener un algoritmo iterativo, el error presenta la diferencia entre el valor aproximado y el valor exacto o de referencia, analizarlo permite evaluar la precision del resultado y determinar si es suficiente para el problema de estudio.

2. APLICACIONES DE LOS METODOS NUMERICOS EN INGENIERIA MECANICA
En ingeniería mecánica, los métodos numéricos permiten estudiar sistemas físicos cuyo comportamiento depende de múltiples variables y condiciones de operación, son especialmente útiles cuando las ecuaciones describen un fenómeno no tienen solución analítica sencilla o cuando es necesario trabajar con geometrías y condiciones reales como por ejemplo en la transferencia de calor en componentes mecánicos: más específicamente en un cilindro de motor, el objetivo es conocer cómo cambia la temperatura según la posición, el tiempo, las propiedades del material y las condiciones de frontera. Cuando la geometría es compleja o las condiciones térmicas varían, la ecuación de conducción de calor puede resolverse mediante métodos numéricos. Otro problema concreto es determinar las frecuencias naturales y la respuesta vibratoria de un sistema formado por masas, resortes y amortiguadores, como la suspensión de un vehículo o una maquina industrial. Para ello se calculan las frecuencias de vibración y los desplazamientos del sistema a partir de sus propiedades fisicas.

3.¿QUE HERRAMIENTAS SE UTILIZAN PARA TRABAJAR CON METODOS NUMERICOS?
Lenguajes compilados (C, C++, Fortran): Proporcionan máxima velocidad de ejecución y control directo de memoria, siendo el estándar para simulación de alto rendimiento. 
Lenguajes interpretados: Priorizan la rapidez de desarrollo y prototipado a costa de una menor velocidad de ejecución directa.
Entornos matriciales (MATLAB, GNU Octave): Diseñados especificamente para manipular vectores y matrices de forma nativa e intuitiva.
Python cientifico (NumPy, SciPy, Matplplotlib): Lenguaje de proposito general complementado con bibliotecas eficientes em C/Fortran para calculo matricial, funciones numericas avanzadas y visualizacion de datos.
Algebra simbólica (CAS): Herramientas orientadas a la manipulación algebraica y derivación exacta de formulas 
Bibliotecas base (BLAS, LAPACK): Rutinas subyacentes altamente optimizadas para operaciones fundamentales de algebra lineal en las que se apoyan la mayoría del software científicos. 
*Burden y Faires (2011) integra código y lenguajes compilados como C y fortran, además de software computacional como MATLAB y MAPLE, por otro lado, Chapra y Canale fundamenta sus ejemplos e implementaciones en MATLAB, VBA (excel), C y C++.

4. ¿QUE HERRAMIENTAS UTILIZAMOS EN ESTE CURSO?
DOCKER: Es una plataforma de virtualización a nivel de sistema operativo que permite empaquetar aplicaciones y sus dependencias dentro de contenedores aislados. Docker comparte el núcleo (kernel) del sistema operativo huésped, lo que permite ejecutar entornos ligeros, de arranque casi instantáneo y totalmente portables, a diferencia de una máquina virtual que hipervisa un sistema operativo ejecutable completo sobre un hardware virtualizado consumiendo más recursos de CPU y RAM.
dockerfile: Para definir la construccion de la imagen contenedora.
compose.yaml: Para orquestar y gestionar entornos de multiples contenedores.
docker compose up -d: Para iniciar los servicios en segundo plano.
docker exec: Para ejecutar comandos o abrir consolas interactivas dentro del contenedor activo
docker stop: Para detener la ejecución 
docker compose down: Para detener y remover los recursos creados 
docker ps: Para listar los contenedores activos y su estado
docker logs: Para inspeccionar la salida estandar y errores del sistema
Apagar un contenedor es la accion que conserva los archivos, estados y modificaciones realizadas dentro del contenedor en reposo mientras que borrarlo es el proceso que destruye la instancia y elimina cualquier dato que no haya sido persistido explicitamente en un volumen montado
GNU Octave: Entorno matricial de codigo abierto para computo numerico
Python: Lenguaje interpretado con el stack científico instalado para calculo e inspección de datos
C: Compilador GNU para lenguaje C enfocado en ejecuciones de alto rendimiento

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
