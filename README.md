# RDM6300

## Execução do trabalho
Crie o repositorio e abra a pasta na IDE do Arduino, para posteriormente upar o codigo para o microcontrolador desejado. No meu caso o modulo RDM6300 foi utilizado juntamente com ESP8266 NodeMCU, o esquematico de ligação pode ser encontrado logo abaixo, utilizando os pinos marcados no ESP8266 NodeMCU como D6 e D7, que no programa são identificados como pinos 12 e 13.

<img src="https://www.arduinoecia.com.br/wp-content/uploads/2020/08/Circuito-ESP8266-NodeMCU-Leitor-RDIF-RDM6300-1024x585.jpg" width=300><br>

ao invez de utilizar o led secundario foi utilizado o proprio led da placa do Node D4.

## Configuração da IDE Arduino para o NodeMCU

Para incluir a placa ESP8266 NodeMCU na IDE Arduino, acesse o menu Arquivo e em seguida Preferências. No campo URLs Adicionais para Gerenciadores de Placas preencha com o seguinte endereço:

http://arduino.esp8266.com/stable/package_esp8266com_index.json

Clique em OK para continuar. No menu Ferramentas -> Placa -> Gerenciador de Placas procure por esp8266 by ESP8266 Community e clique em Instalar:

<img src="https://www.arduinoecia.com.br/wp-content/uploads/2019/04/IDE-Arduino-Gerenciador-de-Placas-768x192.jpg" width=300><br>


Com isso o NodeMCU irá aparecer na sua lista de placas disponíveis. Para utilizar o NodeMCU com a IDE Arduino, selecione NodeMCU 1.0 na lista:

<img src="https://www.arduinoecia.com.br/wp-content/uploads/2019/04/IDE-Arduino-Selecao-Placa-Nodemcu-ESP8266-600x329.jpg" width=300><br>

# Autores
| [<img src="https://avatars.githubusercontent.com/u/56831082?v=4" width=115><br><sub>Arthur Coelho Estevão</sub>](https://github.com/arthurcoelho442) |  [<img src="https://avatars.githubusercontent.com/u/56406192?v=4" width=115><br><sub>Milena da Silva Mantovanelli</sub>](https://github.com/Milena0899) |
| :---: | :---: |
