chmod 777 pi_gpio_init.sh

```text
Welcome to minicom 2.7.1

OPTIONS: I18n 
Compiled on Aug 13 2017, 15:25:34.
Port /dev/ttyS0, 01:05:20

Press CTRL-A Z for help on special keys

AT 
OK
ATI  
SIM800 R14.18

OK
AT+CIPSHUT
SHUT OK
AT+CIPSTATUS
OK

STATE: IP INITIAL
AT+CSTT="internet.keepgo.com","2644",""
OK

AT+CIPSTATUS
OK

STATE: IP START
AT+COPS?
+COPS: 0,0,"T-Mobile USA"

OK
AT+CREG?
+CREG: 0,5

OK
AT+CGDCONT= 1,"IP","internet.keepgo.com","0.0.0.0",0,0
OK
AT+COPS?
+COPS: 0,0,"T-Mobile USA"

OK
AT+CREG?
+CREG: 0,5

OK
AT+CIPSTATUS
OK

STATE: IP START
AT+CIICR=?
OK
AT+CIICR
OK
AT+CIPSTATUS
OK

STATE: IP GPRSACT
```

http://sgreg.fi/blog/article/mixing-the-sim800l-gsmgprs-module

```text
AT+CIPMUX=0
OK
AT+CIPSTATUS
OK

STATE: IP INITIAL
AT+CSTT="internet.keepgo.com","2644",""
OK
AT+COPS?
+COPS: 0,0,"T-Mobile USA"

OK
AT+CIPSTATUS            
OK

STATE: IP START
AT+CIICR
OK
AT+CIPSTATUS
OK

STATE: IP GPRSACT
AT+CIFSR
10.43.170.101

```