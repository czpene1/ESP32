// to be used with Influxdb
#define INFLUXDB_URL "https://dionysos.germanium.cz:8086"
//#define INFLUXDB_TOKEN "OAeTxIXZTJiqpgShzu9fio8qq7NoFVxhB_ZLcD9ykF-XfQ9PB50lmuU4gTmNtplcmMF742RxJ7KeDPn3cL_ntQ=="
#define INFLUXDB_TOKEN "zy0Te3sRoHg4d8YpsJAJNp2sdda4uWO3DW5FnAMEojSuEkz_NVs20tpX_IwzIyZTi32yaWVipJpurD-V_DPQRw=="
#define INFLUXDB_ORG "Germanium"
//#define INFLUXDB_BUCKET "mybucket"
#define INFLUXDB_BUCKET "temperature"

// Set timezone string according to https://www.gnu.org/software/libc/manual/html_node/TZ-Variable.html
// Examples:
//  Pacific Time: "PST8PDT"
//  Eastern: "EST5EDT"
//  Japanesse: "JST-9"
//  Central Europe: "CET-1CEST,M3.5.0,M10.5.0/3"
#define TZ_INFO "CET-1CEST,M3.5.0,M10.5.0/3"


// Other settings
#define TIMESERVER "pool.ntp.org"
#define SLEEP_TIME 60*1000          // time between measurements in ms
