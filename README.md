# Sistema de Monitoramento Ambiental com Arduino Uno R3

Desenvolvido na aula de programação de sistemas embarcados do curso técnico em IoT SENAI.

Este projeto utiliza o Arduino Uno R3 para monitorar variáveis ambientais essenciais, utilizando três sensores:

Sensor PIR para detecção de presença/movimento (pino digital 2)

Sensor de Temperatura TMP36 (conectado ao pino analógico A3)

Sensor de Umidade do Solo (conectado ao pino analógico A1)

Descrição do Circuito:

O sensor PIR está conectado ao pino digital 2 do Arduino, fornecendo sinal digital (0 ou 1) indicando a presença ou ausência de movimento.

O sensor de temperatura TMP36 está ligado ao pino analógico A3, fornecendo um valor analógico proporcional à temperatura ambiente.

O sensor de umidade do solo está ligado ao pino analógico A1 (analógico 1), medindo a umidade do solo em uma faixa analógica.

Funcionamento do Código:

O código realiza a leitura sequencial dos sensores e envia os dados para o monitor serial:

Sensor PIR: leitura digital, indicando presença (1) ou ausência (0).

Sensor de Temperatura: leitura analógica convertida para uma escala de temperatura entre -40°C e 125°C (baseado no mapeamento dos valores lidos).

Sensor de Umidade do Solo: leitura analógica convertida para uma porcentagem de umidade entre 0% e 100%.

Cada leitura é exibida no monitor serial com um pequeno intervalo (100ms) para facilitar a visualização.

<img width="1137" height="769" alt="sensores" src="https://github.com/user-attachments/assets/ae8a4300-ebed-40fc-b3ac-581d7c712085" />
