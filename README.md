Este projeto configura o ESP32 para atuar como uma ponte de comunicação bidirecional entre o Monitor Serial (via cabo USB) e uma conexão Bluetooth clássica. O objetivo principal é permitir a troca de dados em tempo real entre um computador e um dispositivo pareado, como um smartphone.
Funcionalidades

    Inicialização da comunicação serial com taxa de transmissão de 115200 bps.

    Ativação do Bluetooth clássico com o nome identificador ESP32.

    Envio de dados digitados no Monitor Serial diretamente para o dispositivo Bluetooth conectado.

    Recebimento de dados do dispositivo Bluetooth e exibição imediata no Monitor Serial.

Estrutura do Código

O código está estruturado em duas partes principais dentro do framework Arduino:
Configuração Inicial (Setup)

A função de configuração inicial realiza as seguintes ações:

    Estabelece a velocidade do canal serial nativo.

    Configura e inicializa o módulo Bluetooth com o nome definido.

    Exibe uma mensagem informativa no Monitor Serial indicando que o sistema está pronto para o pareamento.

Loop Principal (Loop)

O fluxo principal roda continuamente checando duas condições:

    Se houver dados disponíveis no buffer do Serial nativo, o ESP32 lê esses dados e os transmite via Bluetooth.

    Se houver dados disponíveis no buffer do Bluetooth, o ESP32 lê as informações e as escreve no Monitor Serial.

Requisitos de Hardware

    Placa de desenvolvimento baseada no chip ESP32.

    Cabo USB para alimentação e transferência de código.

Requisitos de Software

    Ambiente de desenvolvimento configurado, como o PlatformIO ou a IDE do Arduino.

    Biblioteca interna BluetoothSerial integrada ao núcleo do ESP32.
