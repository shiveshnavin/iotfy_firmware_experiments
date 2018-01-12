/* Generated file - do not edit. */

#include <stddef.h>
#include "mgos_config.h"

const struct mgos_conf_entry mgos_config_schema_[186] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .num_desc = 185},
  {.type = CONF_TYPE_OBJECT, .key = "update", .num_desc = 8},
  {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, update.timeout)},
  {.type = CONF_TYPE_INT, .key = "commit_timeout", .offset = offsetof(struct mgos_config, update.commit_timeout)},
  {.type = CONF_TYPE_STRING, .key = "url", .offset = offsetof(struct mgos_config, update.url)},
  {.type = CONF_TYPE_INT, .key = "interval", .offset = offsetof(struct mgos_config, update.interval)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, update.ssl_ca_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, update.ssl_client_cert_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, update.ssl_server_name)},
  {.type = CONF_TYPE_BOOL, .key = "enable_post", .offset = offsetof(struct mgos_config, update.enable_post)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "password", .offset = offsetof(struct mgos_config, device.password)},
  {.type = CONF_TYPE_STRING, .key = "shadow_impl", .offset = offsetof(struct mgos_config, device.shadow_impl)},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .num_desc = 10},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "filter", .offset = offsetof(struct mgos_config, debug.filter)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
  {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .num_desc = 11},
  {.type = CONF_TYPE_OBJECT, .key = "mount", .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
  {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
  {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
  {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
  {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .num_desc = 19},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
  {.type = CONF_TYPE_OBJECT, .key = "aws", .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "thing_name", .offset = offsetof(struct mgos_config, aws.thing_name)},
  {.type = CONF_TYPE_OBJECT, .key = "greengrass", .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, aws.greengrass.enable)},
  {.type = CONF_TYPE_INT, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_max)},
  {.type = CONF_TYPE_OBJECT, .key = "wifi", .num_desc = 30},
  {.type = CONF_TYPE_OBJECT, .key = "sta", .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "ap", .num_desc = 15},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
  {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
  {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
  {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
  {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
  {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
  {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
  {.type = CONF_TYPE_OBJECT, .key = "http", .num_desc = 10},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
  {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
  {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
  {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .num_desc = 23},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "ws", .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
  {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, rpc.ws.ssl_client_cert_file)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .num_desc = 2},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "topic", .offset = offsetof(struct mgos_config, rpc.mqtt.topic)},
  {.type = CONF_TYPE_OBJECT, .key = "uart", .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
  {.type = CONF_TYPE_BOOL, .key = "wait_for_start_frame", .offset = offsetof(struct mgos_config, rpc.uart.wait_for_start_frame)},
  {.type = CONF_TYPE_OBJECT, .key = "dash", .num_desc = 6},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, dash.enable)},
  {.type = CONF_TYPE_STRING, .key = "token", .offset = offsetof(struct mgos_config, dash.token)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, dash.server)},
  {.type = CONF_TYPE_STRING, .key = "ca_file", .offset = offsetof(struct mgos_config, dash.ca_file)},
  {.type = CONF_TYPE_BOOL, .key = "send_logs", .offset = offsetof(struct mgos_config, dash.send_logs)},
  {.type = CONF_TYPE_INT, .key = "stats_interval", .offset = offsetof(struct mgos_config, dash.stats_interval)},
  {.type = CONF_TYPE_OBJECT, .key = "dns_sd", .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, dns_sd.enable)},
  {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, dns_sd.host_name)},
  {.type = CONF_TYPE_STRING, .key = "txt", .offset = offsetof(struct mgos_config, dns_sd.txt)},
  {.type = CONF_TYPE_INT, .key = "ttl", .offset = offsetof(struct mgos_config, dns_sd.ttl)},
  {.type = CONF_TYPE_OBJECT, .key = "gcp", .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, gcp.enable)},
  {.type = CONF_TYPE_STRING, .key = "project", .offset = offsetof(struct mgos_config, gcp.project)},
  {.type = CONF_TYPE_STRING, .key = "region", .offset = offsetof(struct mgos_config, gcp.region)},
  {.type = CONF_TYPE_STRING, .key = "registry", .offset = offsetof(struct mgos_config, gcp.registry)},
  {.type = CONF_TYPE_STRING, .key = "device", .offset = offsetof(struct mgos_config, gcp.device)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, gcp.key)},
  {.type = CONF_TYPE_INT, .key = "token_ttl", .offset = offsetof(struct mgos_config, gcp.token_ttl)},
  {.type = CONF_TYPE_OBJECT, .key = "mjs", .num_desc = 1},
  {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
  {.type = CONF_TYPE_OBJECT, .key = "sntp", .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sntp.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, sntp.server)},
  {.type = CONF_TYPE_INT, .key = "retry_min", .offset = offsetof(struct mgos_config, sntp.retry_min)},
  {.type = CONF_TYPE_INT, .key = "retry_max", .offset = offsetof(struct mgos_config, sntp.retry_max)},
  {.type = CONF_TYPE_INT, .key = "update_interval", .offset = offsetof(struct mgos_config, sntp.update_interval)},
  {.type = CONF_TYPE_OBJECT, .key = "spi", .num_desc = 8},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, spi.enable)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, spi.debug)},
  {.type = CONF_TYPE_INT, .key = "miso_gpio", .offset = offsetof(struct mgos_config, spi.miso_gpio)},
  {.type = CONF_TYPE_INT, .key = "mosi_gpio", .offset = offsetof(struct mgos_config, spi.mosi_gpio)},
  {.type = CONF_TYPE_INT, .key = "sclk_gpio", .offset = offsetof(struct mgos_config, spi.sclk_gpio)},
  {.type = CONF_TYPE_INT, .key = "cs0_gpio", .offset = offsetof(struct mgos_config, spi.cs0_gpio)},
  {.type = CONF_TYPE_INT, .key = "cs1_gpio", .offset = offsetof(struct mgos_config, spi.cs1_gpio)},
  {.type = CONF_TYPE_INT, .key = "cs2_gpio", .offset = offsetof(struct mgos_config, spi.cs2_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "pins", .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "led", .offset = offsetof(struct mgos_config, pins.led)},
  {.type = CONF_TYPE_INT, .key = "button", .offset = offsetof(struct mgos_config, pins.button)},
  {.type = CONF_TYPE_OBJECT, .key = "dev", .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, dev.id)},
  {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, dev.name)},
  {.type = CONF_TYPE_STRING, .key = "details", .offset = offsetof(struct mgos_config, dev.details)},
  {.type = CONF_TYPE_OBJECT, .key = "dev_ap", .num_desc = 2},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, dev_ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "paswd", .offset = offsetof(struct mgos_config, dev_ap.paswd)},
  {.type = CONF_TYPE_OBJECT, .key = "dev_wifi", .num_desc = 2},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, dev_wifi.ssid)},
  {.type = CONF_TYPE_STRING, .key = "paswd", .offset = offsetof(struct mgos_config, dev_wifi.paswd)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Getters {{{ */
const struct mgos_config_update *mgos_config_get_update(struct mgos_config *cfg) {
  return &cfg->update;
}
int         mgos_config_get_update_timeout(struct mgos_config *cfg) {
  return cfg->update.timeout;
}
int         mgos_config_get_update_commit_timeout(struct mgos_config *cfg) {
  return cfg->update.commit_timeout;
}
const char *mgos_config_get_update_url(struct mgos_config *cfg) {
  return cfg->update.url;
}
int         mgos_config_get_update_interval(struct mgos_config *cfg) {
  return cfg->update.interval;
}
const char *mgos_config_get_update_ssl_ca_file(struct mgos_config *cfg) {
  return cfg->update.ssl_ca_file;
}
const char *mgos_config_get_update_ssl_client_cert_file(struct mgos_config *cfg) {
  return cfg->update.ssl_client_cert_file;
}
const char *mgos_config_get_update_ssl_server_name(struct mgos_config *cfg) {
  return cfg->update.ssl_server_name;
}
int         mgos_config_get_update_enable_post(struct mgos_config *cfg) {
  return cfg->update.enable_post;
}
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}
const char *mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
const char *mgos_config_get_device_password(struct mgos_config *cfg) {
  return cfg->device.password;
}
const char *mgos_config_get_device_shadow_impl(struct mgos_config *cfg) {
  return cfg->device.shadow_impl;
}
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
int         mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
const char *mgos_config_get_debug_filter(struct mgos_config *cfg) {
  return cfg->debug.filter;
}
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg) {
  return cfg->debug.stdout_topic;
}
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg) {
  return cfg->debug.stderr_topic;
}
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg) {
  return &cfg->sys.mount;
}
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg) {
  return cfg->sys.mount.path;
}
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_type;
}
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_opts;
}
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_type;
}
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_opts;
}
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
const char *mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}
int         mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
int         mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
int         mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg) {
  return &cfg->mqtt;
}
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg) {
  return cfg->mqtt.enable;
}
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg) {
  return cfg->mqtt.server;
}
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg) {
  return cfg->mqtt.client_id;
}
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg) {
  return cfg->mqtt.user;
}
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg) {
  return cfg->mqtt.pass;
}
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_min;
}
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_max;
}
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cert;
}
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_key;
}
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_ca_cert;
}
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cipher_suites;
}
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_identity;
}
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_key;
}
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt.clean_session;
}
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt.keep_alive;
}
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt.will_topic;
}
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg) {
  return cfg->mqtt.will_message;
}
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt.max_qos;
}
int         mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt.recv_mbuf_limit;
}
const struct mgos_config_aws *mgos_config_get_aws(struct mgos_config *cfg) {
  return &cfg->aws;
}
const char *mgos_config_get_aws_thing_name(struct mgos_config *cfg) {
  return cfg->aws.thing_name;
}
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(struct mgos_config *cfg) {
  return &cfg->aws.greengrass;
}
int         mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg) {
  return cfg->aws.greengrass.enable;
}
int         mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->aws.greengrass.reconnect_timeout_min;
}
int         mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->aws.greengrass.reconnect_timeout_max;
}
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg) {
  return &cfg->wifi;
}
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg) {
  return &cfg->wifi.sta;
}
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta.enable;
}
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta.ssid;
}
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta.pass;
}
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg) {
  return cfg->wifi.sta.user;
}
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta.anon_identity;
}
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.cert;
}
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg) {
  return cfg->wifi.sta.key;
}
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.ca_cert;
}
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta.ip;
}
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta.netmask;
}
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta.gw;
}
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta.nameserver;
}
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta.dhcp_hostname;
}
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg) {
  return &cfg->wifi.ap;
}
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg) {
  return cfg->wifi.ap.enable;
}
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg) {
  return cfg->wifi.ap.ssid;
}
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg) {
  return cfg->wifi.ap.pass;
}
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg) {
  return cfg->wifi.ap.hidden;
}
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg) {
  return cfg->wifi.ap.channel;
}
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg) {
  return cfg->wifi.ap.max_connections;
}
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg) {
  return cfg->wifi.ap.ip;
}
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg) {
  return cfg->wifi.ap.netmask;
}
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg) {
  return cfg->wifi.ap.gw;
}
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_start;
}
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_end;
}
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg) {
  return cfg->wifi.ap.trigger_on_gpio;
}
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg) {
  return cfg->wifi.ap.disable_after;
}
const char *mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg) {
  return cfg->wifi.ap.hostname;
}
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg) {
  return cfg->wifi.ap.keep_enabled;
}
const struct mgos_config_http *mgos_config_get_http(struct mgos_config *cfg) {
  return &cfg->http;
}
int         mgos_config_get_http_enable(struct mgos_config *cfg) {
  return cfg->http.enable;
}
const char *mgos_config_get_http_listen_addr(struct mgos_config *cfg) {
  return cfg->http.listen_addr;
}
const char *mgos_config_get_http_document_root(struct mgos_config *cfg) {
  return cfg->http.document_root;
}
const char *mgos_config_get_http_ssl_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_cert;
}
const char *mgos_config_get_http_ssl_key(struct mgos_config *cfg) {
  return cfg->http.ssl_key;
}
const char *mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_ca_cert;
}
const char *mgos_config_get_http_upload_acl(struct mgos_config *cfg) {
  return cfg->http.upload_acl;
}
const char *mgos_config_get_http_hidden_files(struct mgos_config *cfg) {
  return cfg->http.hidden_files;
}
const char *mgos_config_get_http_auth_domain(struct mgos_config *cfg) {
  return cfg->http.auth_domain;
}
const char *mgos_config_get_http_auth_file(struct mgos_config *cfg) {
  return cfg->http.auth_file;
}
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}
int         mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg) {
  return &cfg->rpc.ws;
}
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg) {
  return cfg->rpc.ws.enable;
}
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg) {
  return cfg->rpc.ws.server_address;
}
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_min;
}
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_max;
}
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_server_name;
}
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_ca_file;
}
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_client_cert_file;
}
const struct mgos_config_rpc_mqtt *mgos_config_get_rpc_mqtt(struct mgos_config *cfg) {
  return &cfg->rpc.mqtt;
}
int         mgos_config_get_rpc_mqtt_enable(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.enable;
}
const char *mgos_config_get_rpc_mqtt_topic(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.topic;
}
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg) {
  return &cfg->rpc.uart;
}
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg) {
  return cfg->rpc.uart.uart_no;
}
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg) {
  return cfg->rpc.uart.baud_rate;
}
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg) {
  return cfg->rpc.uart.fc_type;
}
int         mgos_config_get_rpc_uart_wait_for_start_frame(struct mgos_config *cfg) {
  return cfg->rpc.uart.wait_for_start_frame;
}
const struct mgos_config_dash *mgos_config_get_dash(struct mgos_config *cfg) {
  return &cfg->dash;
}
int         mgos_config_get_dash_enable(struct mgos_config *cfg) {
  return cfg->dash.enable;
}
const char *mgos_config_get_dash_token(struct mgos_config *cfg) {
  return cfg->dash.token;
}
const char *mgos_config_get_dash_server(struct mgos_config *cfg) {
  return cfg->dash.server;
}
const char *mgos_config_get_dash_ca_file(struct mgos_config *cfg) {
  return cfg->dash.ca_file;
}
int         mgos_config_get_dash_send_logs(struct mgos_config *cfg) {
  return cfg->dash.send_logs;
}
int         mgos_config_get_dash_stats_interval(struct mgos_config *cfg) {
  return cfg->dash.stats_interval;
}
const struct mgos_config_dns_sd *mgos_config_get_dns_sd(struct mgos_config *cfg) {
  return &cfg->dns_sd;
}
int         mgos_config_get_dns_sd_enable(struct mgos_config *cfg) {
  return cfg->dns_sd.enable;
}
const char *mgos_config_get_dns_sd_host_name(struct mgos_config *cfg) {
  return cfg->dns_sd.host_name;
}
const char *mgos_config_get_dns_sd_txt(struct mgos_config *cfg) {
  return cfg->dns_sd.txt;
}
int         mgos_config_get_dns_sd_ttl(struct mgos_config *cfg) {
  return cfg->dns_sd.ttl;
}
const struct mgos_config_gcp *mgos_config_get_gcp(struct mgos_config *cfg) {
  return &cfg->gcp;
}
int         mgos_config_get_gcp_enable(struct mgos_config *cfg) {
  return cfg->gcp.enable;
}
const char *mgos_config_get_gcp_project(struct mgos_config *cfg) {
  return cfg->gcp.project;
}
const char *mgos_config_get_gcp_region(struct mgos_config *cfg) {
  return cfg->gcp.region;
}
const char *mgos_config_get_gcp_registry(struct mgos_config *cfg) {
  return cfg->gcp.registry;
}
const char *mgos_config_get_gcp_device(struct mgos_config *cfg) {
  return cfg->gcp.device;
}
const char *mgos_config_get_gcp_key(struct mgos_config *cfg) {
  return cfg->gcp.key;
}
int         mgos_config_get_gcp_token_ttl(struct mgos_config *cfg) {
  return cfg->gcp.token_ttl;
}
const struct mgos_config_mjs *mgos_config_get_mjs(struct mgos_config *cfg) {
  return &cfg->mjs;
}
int         mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg) {
  return cfg->mjs.generate_jsc;
}
const struct mgos_config_sntp *mgos_config_get_sntp(struct mgos_config *cfg) {
  return &cfg->sntp;
}
int         mgos_config_get_sntp_enable(struct mgos_config *cfg) {
  return cfg->sntp.enable;
}
const char *mgos_config_get_sntp_server(struct mgos_config *cfg) {
  return cfg->sntp.server;
}
int         mgos_config_get_sntp_retry_min(struct mgos_config *cfg) {
  return cfg->sntp.retry_min;
}
int         mgos_config_get_sntp_retry_max(struct mgos_config *cfg) {
  return cfg->sntp.retry_max;
}
int         mgos_config_get_sntp_update_interval(struct mgos_config *cfg) {
  return cfg->sntp.update_interval;
}
const struct mgos_config_spi *mgos_config_get_spi(struct mgos_config *cfg) {
  return &cfg->spi;
}
int         mgos_config_get_spi_enable(struct mgos_config *cfg) {
  return cfg->spi.enable;
}
int         mgos_config_get_spi_debug(struct mgos_config *cfg) {
  return cfg->spi.debug;
}
int         mgos_config_get_spi_miso_gpio(struct mgos_config *cfg) {
  return cfg->spi.miso_gpio;
}
int         mgos_config_get_spi_mosi_gpio(struct mgos_config *cfg) {
  return cfg->spi.mosi_gpio;
}
int         mgos_config_get_spi_sclk_gpio(struct mgos_config *cfg) {
  return cfg->spi.sclk_gpio;
}
int         mgos_config_get_spi_cs0_gpio(struct mgos_config *cfg) {
  return cfg->spi.cs0_gpio;
}
int         mgos_config_get_spi_cs1_gpio(struct mgos_config *cfg) {
  return cfg->spi.cs1_gpio;
}
int         mgos_config_get_spi_cs2_gpio(struct mgos_config *cfg) {
  return cfg->spi.cs2_gpio;
}
const struct mgos_config_pins *mgos_config_get_pins(struct mgos_config *cfg) {
  return &cfg->pins;
}
int         mgos_config_get_pins_led(struct mgos_config *cfg) {
  return cfg->pins.led;
}
int         mgos_config_get_pins_button(struct mgos_config *cfg) {
  return cfg->pins.button;
}
const struct mgos_config_dev *mgos_config_get_dev(struct mgos_config *cfg) {
  return &cfg->dev;
}
const char *mgos_config_get_dev_id(struct mgos_config *cfg) {
  return cfg->dev.id;
}
const char *mgos_config_get_dev_name(struct mgos_config *cfg) {
  return cfg->dev.name;
}
const char *mgos_config_get_dev_details(struct mgos_config *cfg) {
  return cfg->dev.details;
}
const struct mgos_config_dev_ap *mgos_config_get_dev_ap(struct mgos_config *cfg) {
  return &cfg->dev_ap;
}
const char *mgos_config_get_dev_ap_ssid(struct mgos_config *cfg) {
  return cfg->dev_ap.ssid;
}
const char *mgos_config_get_dev_ap_paswd(struct mgos_config *cfg) {
  return cfg->dev_ap.paswd;
}
const struct mgos_config_dev_wifi *mgos_config_get_dev_wifi(struct mgos_config *cfg) {
  return &cfg->dev_wifi;
}
const char *mgos_config_get_dev_wifi_ssid(struct mgos_config *cfg) {
  return cfg->dev_wifi.ssid;
}
const char *mgos_config_get_dev_wifi_paswd(struct mgos_config *cfg) {
  return cfg->dev_wifi.paswd;
}
/* }}} */

/* Setters {{{ */
void mgos_config_set_update_timeout(struct mgos_config *cfg, int         val) {
  cfg->update.timeout = val;
}
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int         val) {
  cfg->update.commit_timeout = val;
}
void mgos_config_set_update_url(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->update.url, val);
}
void mgos_config_set_update_interval(struct mgos_config *cfg, int         val) {
  cfg->update.interval = val;
}
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->update.ssl_ca_file, val);
}
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->update.ssl_client_cert_file, val);
}
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->update.ssl_server_name, val);
}
void mgos_config_set_update_enable_post(struct mgos_config *cfg, int         val) {
  cfg->update.enable_post = val;
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.id, val);
}
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.password, val);
}
void mgos_config_set_device_shadow_impl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.shadow_impl, val);
}
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, val);
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val) {
  cfg->debug.mbedtls_level = val;
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val) {
  cfg->debug.level = val;
}
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.filter, val);
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stdout_uart = val;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stderr_uart = val;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val) {
  cfg->debug.factory_reset_gpio = val;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, val);
}
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.stdout_topic, val);
}
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.stderr_topic, val);
}
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.path, val);
}
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_type, val);
}
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_opts, val);
}
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_type, val);
}
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_opts, val);
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val) {
  cfg->sys.wdt_timeout = val;
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.enable = val;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.i2c_addr = val;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.ecdh_slots_mask = val;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->conf_acl, val);
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val) {
  cfg->i2c.enable = val;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val) {
  cfg->i2c.freq = val;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val) {
  cfg->i2c.debug = val;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.sda_gpio = val;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.scl_gpio = val;
}
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val) {
  cfg->mqtt.enable = val;
}
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.server, val);
}
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.client_id, val);
}
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.user, val);
}
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.pass, val);
}
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val) {
  cfg->mqtt.reconnect_timeout_min = val;
}
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val) {
  cfg->mqtt.reconnect_timeout_max = val;
}
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cert, val);
}
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_key, val);
}
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, val);
}
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, val);
}
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, val);
}
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, val);
}
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val) {
  cfg->mqtt.clean_session = val;
}
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val) {
  cfg->mqtt.keep_alive = val;
}
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.will_topic, val);
}
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.will_message, val);
}
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val) {
  cfg->mqtt.max_qos = val;
}
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int         val) {
  cfg->mqtt.recv_mbuf_limit = val;
}
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->aws.thing_name, val);
}
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int         val) {
  cfg->aws.greengrass.enable = val;
}
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int         val) {
  cfg->aws.greengrass.reconnect_timeout_min = val;
}
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int         val) {
  cfg->aws.greengrass.reconnect_timeout_max = val;
}
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta.enable = val;
}
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ssid, val);
}
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.pass, val);
}
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.user, val);
}
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.anon_identity, val);
}
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.cert, val);
}
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.key, val);
}
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ca_cert, val);
}
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ip, val);
}
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.netmask, val);
}
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.gw, val);
}
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.nameserver, val);
}
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, val);
}
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.enable = val;
}
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.ssid, val);
}
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.pass, val);
}
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.hidden = val;
}
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.channel = val;
}
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.max_connections = val;
}
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.ip, val);
}
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.netmask, val);
}
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.gw, val);
}
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, val);
}
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, val);
}
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.trigger_on_gpio = val;
}
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.disable_after = val;
}
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.hostname, val);
}
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.keep_enabled = val;
}
void mgos_config_set_http_enable(struct mgos_config *cfg, int         val) {
  cfg->http.enable = val;
}
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.listen_addr, val);
}
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.document_root, val);
}
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_cert, val);
}
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_key, val);
}
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_ca_cert, val);
}
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.upload_acl, val);
}
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.hidden_files, val);
}
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.auth_domain, val);
}
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.auth_file, val);
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.enable = val;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_frame_size = val;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_queue_length = val;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val) {
  cfg->rpc.default_out_channel_idle_close_timeout = val;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.acl_file, val);
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, val);
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_file, val);
}
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.enable = val;
}
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.server_address, val);
}
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.reconnect_interval_min = val;
}
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.reconnect_interval_max = val;
}
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, val);
}
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_file, val);
}
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_client_cert_file, val);
}
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.mqtt.enable = val;
}
void mgos_config_set_rpc_mqtt_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.mqtt.topic, val);
}
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.uart_no = val;
}
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.baud_rate = val;
}
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.fc_type = val;
}
void mgos_config_set_rpc_uart_wait_for_start_frame(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.wait_for_start_frame = val;
}
void mgos_config_set_dash_enable(struct mgos_config *cfg, int         val) {
  cfg->dash.enable = val;
}
void mgos_config_set_dash_token(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dash.token, val);
}
void mgos_config_set_dash_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dash.server, val);
}
void mgos_config_set_dash_ca_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dash.ca_file, val);
}
void mgos_config_set_dash_send_logs(struct mgos_config *cfg, int         val) {
  cfg->dash.send_logs = val;
}
void mgos_config_set_dash_stats_interval(struct mgos_config *cfg, int         val) {
  cfg->dash.stats_interval = val;
}
void mgos_config_set_dns_sd_enable(struct mgos_config *cfg, int         val) {
  cfg->dns_sd.enable = val;
}
void mgos_config_set_dns_sd_host_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dns_sd.host_name, val);
}
void mgos_config_set_dns_sd_txt(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dns_sd.txt, val);
}
void mgos_config_set_dns_sd_ttl(struct mgos_config *cfg, int         val) {
  cfg->dns_sd.ttl = val;
}
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int         val) {
  cfg->gcp.enable = val;
}
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->gcp.project, val);
}
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->gcp.region, val);
}
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->gcp.registry, val);
}
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->gcp.device, val);
}
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->gcp.key, val);
}
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int         val) {
  cfg->gcp.token_ttl = val;
}
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int         val) {
  cfg->mjs.generate_jsc = val;
}
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int         val) {
  cfg->sntp.enable = val;
}
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sntp.server, val);
}
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int         val) {
  cfg->sntp.retry_min = val;
}
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int         val) {
  cfg->sntp.retry_max = val;
}
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int         val) {
  cfg->sntp.update_interval = val;
}
void mgos_config_set_spi_enable(struct mgos_config *cfg, int         val) {
  cfg->spi.enable = val;
}
void mgos_config_set_spi_debug(struct mgos_config *cfg, int         val) {
  cfg->spi.debug = val;
}
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int         val) {
  cfg->spi.miso_gpio = val;
}
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int         val) {
  cfg->spi.mosi_gpio = val;
}
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int         val) {
  cfg->spi.sclk_gpio = val;
}
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int         val) {
  cfg->spi.cs0_gpio = val;
}
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int         val) {
  cfg->spi.cs1_gpio = val;
}
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int         val) {
  cfg->spi.cs2_gpio = val;
}
void mgos_config_set_pins_led(struct mgos_config *cfg, int         val) {
  cfg->pins.led = val;
}
void mgos_config_set_pins_button(struct mgos_config *cfg, int         val) {
  cfg->pins.button = val;
}
void mgos_config_set_dev_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev.id, val);
}
void mgos_config_set_dev_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev.name, val);
}
void mgos_config_set_dev_details(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev.details, val);
}
void mgos_config_set_dev_ap_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev_ap.ssid, val);
}
void mgos_config_set_dev_ap_paswd(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev_ap.paswd, val);
}
void mgos_config_set_dev_wifi_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev_wifi.ssid, val);
}
void mgos_config_set_dev_wifi_paswd(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->dev_wifi.paswd, val);
}
/* }}} */