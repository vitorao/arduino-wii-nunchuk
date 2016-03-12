# Usando Arduino com Wii Nunchuk feito em Python

O Arduíno é uma ferramenta bastante utilizada, porém se você não obter a placa Leonardo não seria possível fazer a emulação do teclado. Porém temos nossos truques na programação.

O objetivo é escrever na porta serial com o Arduíno de acordo com os dados recebidos do nosso controle Nunchuck, fazer com que um código em Python entenda oque for escrito e traduzir isso para comando no Windows. Os códigos são bastante simples.

A única coisa a se fazer no Arduíno é iniciar a Serial e seu baund e escrever nela. Porém gostaria de usar de um dispositivo de entrada para simular nosso teclado. Para conectar o Nunchuck no Arduíno veja o conector do controle na imagem abaixo.

<a href="http://vitoraraujo.comule.com/wp-content/uploads/2015/04/1.jpg"><img class=" size-full wp-image-64 aligncenter" src="http://vitoraraujo.comule.com/wp-content/uploads/2015/04/1.jpg" alt="1" width="673" height="382" /></a>

Iremos conectar o Nunchuck no Arduíno nas seguintes posições:
<table style="height: 145px;" width="533">
<tbody>
<tr>
<td style="text-align: left;">ARDUINO</td>
<td>NUNCHUCK</td>
</tr>
<tr>
<td>3.3v</td>
<td>3.3v</td>
</tr>
<tr>
<td>Ground</td>
<td>Ground</td>
</tr>
<tr>
<td>Data(SDA)</td>
<td>pino A4</td>
</tr>
<tr>
<td>Clock(SCL)</td>
<td>pino A5</td>
</tr>
</tbody>
</table>
O esquema ficará da seguinte forma:

<a href="http://vitoraraujo.comule.com/wp-content/uploads/2015/04/2.jpg"><img class="alignnone size-full wp-image-65" src="http://vitoraraujo.comule.com/wp-content/uploads/2015/04/2.jpg" alt="2" width="469" height="470" /></a>

Feito toda conexão necessária vamos ao código do Arduíno. Para o reconhecimento do nunchuck utilizei a biblioteca disponível no próprio site. <a href="http://playground.arduino.cc/Main/WiiChuckClass">http://playground.arduino.cc/Main/WiiChuckClass</a> basta copiar o primeiro código salvar como “WiiChuck.h” e jogar na pasta “libraries” do Arduíno. 

O código para para execução no Arduino se encontra no arquivo chamado <b>nushk.ino</b>

Agora para o Python será preciso instalar o pacote pra windows se você usa uma versão diferente da 2.5. Para isso acesse o link e baixe o referente a sua versão (http://sourceforge.net/projects/pywin32/files/pywin32/Build%20219/)

E assim, rode o código em python chamado <b>nushk.py</b>
