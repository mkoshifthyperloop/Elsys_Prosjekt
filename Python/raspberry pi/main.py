import serial
from flask import Flask
from flask_json import FlaskJSON, JsonError, json_response, as_json
import threading



if __name__ == "__main__":
	x =[]
	y = []
	hastighet = []
	aksel = []
	spinn = []
	# esp32_thread = threading.Thread(target=monitor_device, args=(x, y, hastighet, aksel, spinn), daemon=True).start()

	app = Flask(__name__)
	FlaskJSON(app)

	@app.route("/play")
	def get_serial_data(): #Burde vi sende en seriell melding til esp som starter kalibrering???
		esp = serial.Serial(port="COM4", baudrate=115200, timeout=.1) #change port to right port on pi
		esp.writeline(b"start")
		while True:
			data = esp.readline()

			try:
				#decoding serial data
				data.decode("utf-8")
				data.split(",")

				#if esp32 detects no motion, end transmission
				if data == "done":
					break

				x.append(data[0])
				y.append(data[1])
				hastighet.append(data[2])
				aksel.append(data[3])
				spinn.append(data[4])


			except:
				pass
		return json_response(x=x, y=y, hastighet=hastighet, akselerasjon=aksel, spinn=spinn)

	@app.route("/status") #is server alive?
	def get_status():
		return json_response(alive=True)

	@app.route("/data") #gather last dump of data
	def get_data():
		return json_response(x=x, y=y, hastighet=hastighet, akselerasjon=aksel, spinn=spinn)

	@app.route("/test")
	def get_test():
		print("heyoooo")
		return "heyooooooooooooooo"

	app.run(debug=False)

#Workflow: init kast, gather serial data, serialize and send json response

