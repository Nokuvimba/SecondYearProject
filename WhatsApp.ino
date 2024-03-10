#include <WiFi.h>
#include <HTTPClient.h>
#include <UrlEncode.h>

const char* ssid = "B535_B23D"; // your WiFi SSID
const char* password = "TgdN3d4BGYb"; // your WiFi password

// Phone number and API key for CallMeBot WhatsApp API
String phoneNumber = "+353899624685"; // country code + phone number
String apiKey = "7059395"; // your CallMeBot API key

// Function to send a message via WhatsApp using CallMeBot API
void sendMessage(String message) {
  // Data to send with HTTP POST
  String encodedMessage = urlEncode(message);
  String url = "https://api.callmebot.com/whatsapp.php?phone=" + phoneNumber  + "&text=" + encodedMessage+ "&apikey=" + apiKey;

  HTTPClient http;
  http.begin(url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");

  // Send HTTP POST request
  int httpResponseCode = http.POST("");
  if (httpResponseCode == 200) {
    Serial.println("Message sent successfully");
  } else {
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

void setup() {
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  // Send a test message to WhatsApp
  sendMessage("Hello from ESP32!");
}

void loop() {
  // Nothing to do here for this example
}
