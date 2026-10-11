% suma.m — Suma de dos números, en Octave.
% Si no se proporcionan argumentos, usa 0.1 y 0.2.
% UEA 1151039 · Métodos Numéricos en Ingeniería · UAM Azcapotzalco

args = argv();

if numel(args) == 2
    a = str2double(args{1});
    b = str2double(args{2});
elseif isempty(args)
    a = 0.1;
    b = 0.2;
else
    error('Uso: octave suma.m [numero1 numero2]');
end

suma = a + b;

printf('%.17g\n', suma);