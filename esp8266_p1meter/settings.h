// **********************************
// * Settings                       *
// **********************************

// Update treshold in milliseconds, messages will only be sent on this interval
#define UPDATE_INTERVAL 60000  // 1 minute
//#define UPDATE_INTERVAL 300000 // 5 minutes

// * Baud rate for both hardware and software 
#define BAUD_RATE 115200

// The used serial pins, note that this can only be UART0, as other serial port doesn't support inversion
// By default the UART0 serial will be used. These settings displayed here just as a reference. 
// #define SERIAL_RX RX
// #define SERIAL_TX TX

// * Max telegram length
#define P1_MAXLINELENGTH 1050

// * The hostname of our little creature
#define HOSTNAME "p1meter"

// * The password used for OTA
#define OTA_PASSWORD "default"

// * Wifi timeout in milliseconds
#define WIFI_TIMEOUT 30000

// * MQTT network settings
#define MQTT_MAX_RECONNECT_TRIES 10

// * MQTT root topic
//#define MQTT_ROOT_TOPIC "sensors/power/p1meter"
#define MQTT_ROOT_TOPIC "mqtt-metric/metrics/p1meter"

// * MQTT Last reconnection counter
long LAST_RECONNECT_ATTEMPT = 0;

long LAST_UPDATE_SENT = 0;

// * To be filled with EEPROM data
char MQTT_HOST[64] = "";
char MQTT_PORT[6]  = "";
char MQTT_USER[32] = "";
char MQTT_PASS[32] = "";

// * Set to store received telegram
char telegram[P1_MAXLINELENGTH];

// * Set to store the data values read
long CONSUMPTION;
long CONSUMPTION_REACT;

long RETURNDELIVERY;
long RETURNDELIVERY_REACT;

long ACTUAL_CONSUMPTION;
long ACTUAL_CONSUMPTION_REACT;

long ACTUAL_RETURNDELIVERY;
long ACTUAL_RETURNDELIVERY_REACT;

long L1_INSTANT_POWER_USAGE;
long L1_INSTANT_POWER_DELIVERY;
long L2_INSTANT_POWER_USAGE;
long L2_INSTANT_POWER_DELIVERY;
long L3_INSTANT_POWER_USAGE;
long L3_INSTANT_POWER_DELIVERY;

long L1_REACT_POWER_USAGE;
long L1_REACT_POWER_DELIVERY;
long L2_REACT_POWER_USAGE;
long L2_REACT_POWER_DELIVERY;
long L3_REACT_POWER_USAGE;
long L3_REACT_POWER_DELIVERY;

long L1_INSTANT_POWER_CURRENT;
long L2_INSTANT_POWER_CURRENT;
long L3_INSTANT_POWER_CURRENT;
long L1_VOLTAGE;
long L2_VOLTAGE;
long L3_VOLTAGE;

// * Set during CRC checking
long int currentCRC = 0;
