#!/usr/bin/env python3
"""suma.py — Suma de dos números, en Python.
Si no se proporcionan argumentos, usa 0.1 y 0.2.

UEA 1151039 · Métodos Numéricos en Ingeniería · UAM Azcapotzalco
"""

import sys

if len(sys.argv) == 3:
    a = float(sys.argv[1])
    b = float(sys.argv[2])
elif len(sys.argv) == 1:
    a = 0.1
    b = 0.2
else:
    print(f"Uso: {sys.argv[0]} [numero1 numero2]", file=sys.stderr)
    sys.exit(1)

suma = a + b

print(f"{suma:.17g}")