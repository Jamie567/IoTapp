
import paho.mqtt.publish as publish
publish.single("ifn649", "LED_ON", hostname="13.55.233.218")
print("Done")


