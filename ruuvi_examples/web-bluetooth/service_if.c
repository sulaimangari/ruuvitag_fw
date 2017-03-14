/* This file was generated by plugin 'Nordic Semiconductor nRF5x v.1.2.2' (BDS version 1.1.3135.0) */

#include "service_if.h"
#include <stdint.h>

#define NRF_LOG_MODULE_NAME "SERVICE"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#include "ble_ess.h" 
#include "ble_dis.h" 
#include "ble_bas.h" 
#include "ble_tps.h" 
#include "ble_acceleration_service.h" 
#include "ble_nordic_uart_service.h" 

static ble_ess_t    m_ess; 
static ble_dis_t    m_dis; 
static ble_bas_t    m_bas; 
static ble_tps_t    m_tps; 
static ble_acceleration_service_t    m_acceleration_service; 
static ble_nordic_uart_service_t    m_nordic_uart_service; 

uint8_t	m_dis_ieee_11073_20601_regulatory_certification_data_list_initial_value_data_arr[1]; 
uint8_t m_acceleration_service_imu_data_initial_value_imu_array_arr[1]; 
uint8_t m_nordic_uart_service_tx_initial_value_tx_arr[1]; 
uint8_t m_nordic_uart_service_rx_initial_value_rx_arr[1]; 


/**@brief Function for handling the Environmental Sensing events.
 *
 * @details This function will be called for all Environmental Sensing events which are passed to
 *          the application.
 *
 * @param[in]   p_environmental_sensing   Environmental Sensing structure.
 * @param[in]   p_evt   Event received from the Environmental Sensing.
 */
static void on_ess_evt(ble_ess_t * p_ess, ble_ess_evt_t * p_evt)
{
    switch (p_evt->evt_type)
    { 
        case BLE_ESS_PRESSURE_EVT_NOTIFICATION_ENABLED:
            NRF_LOG_INFO("ESS_PRESSURE evt NOTIFICATION_ENABLED. \r\n");
            break;
        case BLE_ESS_PRESSURE_EVT_NOTIFICATION_DISABLED:
            NRF_LOG_INFO("ESS_PRESSURE evt NOTIFICATION_DISABLED. \r\n");
            break;
        case BLE_ESS_PRESSURE_EVT_CCCD_WRITE:
            NRF_LOG_INFO("ESS_PRESSURE evt CCCD_WRITE. \r\n");
            break; 
        case BLE_ESS_TEMPERATURE_EVT_NOTIFICATION_ENABLED:
            NRF_LOG_INFO("ESS_TEMPERATURE evt NOTIFICATION_ENABLED. \r\n");
            break;
        case BLE_ESS_TEMPERATURE_EVT_NOTIFICATION_DISABLED:
            NRF_LOG_INFO("ESS_TEMPERATURE evt NOTIFICATION_DISABLED. \r\n");
            break;
        case BLE_ESS_TEMPERATURE_EVT_CCCD_WRITE:
            NRF_LOG_INFO("ESS_TEMPERATURE evt CCCD_WRITE. \r\n");
            break; 
        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for handling the Device Information events.
 *
 * @details This function will be called for all Device Information events which are passed to
 *          the application.
 *
 * @param[in]   p_device_information   Device Information structure.
 * @param[in]   p_evt   Event received from the Device Information.
 */
static void on_dis_evt(ble_dis_t * p_dis, ble_dis_evt_t * p_evt)
{
    switch (p_evt->evt_type)
    { 
        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for handling the Battery Service events.
 *
 * @details This function will be called for all Battery Service events which are passed to
 *          the application.
 *
 * @param[in]   p_battery_service   Battery Service structure.
 * @param[in]   p_evt   Event received from the Battery Service.
 */
static void on_bas_evt(ble_bas_t * p_bas, ble_bas_evt_t * p_evt)
{
    switch (p_evt->evt_type)
    { 
        case BLE_BAS_BATTERY_LEVEL_EVT_NOTIFICATION_ENABLED:
            NRF_LOG_INFO("BAS_BATTERY_LEVEL evt NOTIFICATION_ENABLED. \r\n");
            break;
        case BLE_BAS_BATTERY_LEVEL_EVT_NOTIFICATION_DISABLED:
            NRF_LOG_INFO("BAS_BATTERY_LEVEL evt NOTIFICATION_DISABLED. \r\n");
            break;
        case BLE_BAS_BATTERY_LEVEL_EVT_CCCD_WRITE:
            NRF_LOG_INFO("BAS_BATTERY_LEVEL evt CCCD_WRITE. \r\n");
            break; 
        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for handling the Tx Power events.
 *
 * @details This function will be called for all Tx Power events which are passed to
 *          the application.
 *
 * @param[in]   p_tx_power   Tx Power structure.
 * @param[in]   p_evt   Event received from the Tx Power.
 */
static void on_tps_evt(ble_tps_t * p_tps, ble_tps_evt_t * p_evt)
{
    switch (p_evt->evt_type)
    { 
        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for handling the Acceleration service events.
 *
 * @details This function will be called for all Acceleration service events which are passed to
 *          the application.
 *
 * @param[in]   p_acceleration_service   Acceleration service structure.
 * @param[in]   p_evt   Event received from the Acceleration service.
 */
static void on_acceleration_service_evt(ble_acceleration_service_t * p_acceleration_service, ble_acceleration_service_evt_t * p_evt)
{
    switch (p_evt->evt_type)
    { 
        case BLE_ACCELERATION_SERVICE_IMU_DATA_EVT_NOTIFICATION_ENABLED:
            NRF_LOG_INFO("ACCELERATION_SERVICE_IMU_DATA evt NOTIFICATION_ENABLED. \r\n");
            break;
        case BLE_ACCELERATION_SERVICE_IMU_DATA_EVT_NOTIFICATION_DISABLED:
            NRF_LOG_INFO("ACCELERATION_SERVICE_IMU_DATA evt NOTIFICATION_DISABLED. \r\n");
            break;
        case BLE_ACCELERATION_SERVICE_IMU_DATA_EVT_CCCD_WRITE:
            NRF_LOG_INFO("ACCELERATION_SERVICE_IMU_DATA evt CCCD_WRITE. \r\n");
            break; 
        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for handling the Nordic UART Service events.
 *
 * @details This function will be called for all Nordic UART Service events which are passed to
 *          the application.
 *
 * @param[in]   p_nordic_uart_service   Nordic UART Service structure.
 * @param[in]   p_evt   Event received from the Nordic UART Service.
 */
static void on_nordic_uart_service_evt(ble_nordic_uart_service_t * p_nordic_uart_service, ble_nordic_uart_service_evt_t * p_evt)
{
    switch (p_evt->evt_type)
    { 
        case BLE_NORDIC_UART_SERVICE_TX_EVT_WRITE:
            NRF_LOG_INFO("NORDIC_UART_SERVICE_TX evt WRITE. \r\n");
            break; 
        case BLE_NORDIC_UART_SERVICE_RX_EVT_NOTIFICATION_ENABLED:
            NRF_LOG_INFO("NORDIC_UART_SERVICE_RX evt NOTIFICATION_ENABLED. \r\n");
            break;
        case BLE_NORDIC_UART_SERVICE_RX_EVT_NOTIFICATION_DISABLED:
            NRF_LOG_INFO("NORDIC_UART_SERVICE_RX evt NOTIFICATION_DISABLED. \r\n");
            break;
        case BLE_NORDIC_UART_SERVICE_RX_EVT_CCCD_WRITE:
            NRF_LOG_INFO("NORDIC_UART_SERVICE_RX evt CCCD_WRITE. \r\n");
            break; 
        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for initializing the Services generated by Bluetooth Developer Studio.
 *
 *
 * @return      NRF_SUCCESS on successful initialization of services, otherwise an error code.
 */
uint32_t bluetooth_init(void)
{
    uint32_t    err_code; 
    ble_ess_init_t    ess_init; 
    ble_dis_init_t    dis_init; 
    ble_bas_init_t    bas_init; 
    ble_tps_init_t    tps_init; 
    ble_acceleration_service_init_t    acceleration_service_init; 
    ble_nordic_uart_service_init_t    nordic_uart_service_init; 
    

    // Initialize Environmental Sensing.
    memset(&ess_init, 0, sizeof(ess_init));

    ess_init.evt_handler = on_ess_evt; 
    ess_init.is_pressure_notify_supported = true;
    memset(&ess_init.ble_ess_pressure_initial_value.pressure,
           0x00,
           sizeof(ess_init.ble_ess_pressure_initial_value.pressure));
    ess_init.is_temperature_notify_supported = true;
    memset(&ess_init.ble_ess_temperature_initial_value.temperature,
           0x00,
           sizeof(ess_init.ble_ess_temperature_initial_value.temperature));
    memset(&ess_init.ble_ess_humidity_initial_value.humidity,
           0x00,
           sizeof(ess_init.ble_ess_humidity_initial_value.humidity));
    ess_init.ble_ess_barometric_pressure_trend_initial_value.barometric_pressure_trend.barometric_pressure_trend = BAROMETRIC_PRESSURE_TREND_UNKNOWN; 

    err_code = ble_ess_init(&m_ess, &ess_init);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    } 

    // Initialize Device Information.
    memset(&dis_init, 0, sizeof(dis_init));

    dis_init.evt_handler = on_dis_evt; 
    ble_srv_ascii_to_utf8(&dis_init.ble_dis_manufacturer_name_string_initial_value.manufacturer_name, "INITIAL VALUE"); 
    ble_srv_ascii_to_utf8(&dis_init.ble_dis_model_number_string_initial_value.model_number, "INITIAL VALUE"); 
    ble_srv_ascii_to_utf8(&dis_init.ble_dis_serial_number_string_initial_value.serial_number, "INITIAL VALUE"); 
    ble_srv_ascii_to_utf8(&dis_init.ble_dis_hardware_revision_string_initial_value.hardware_revision, "INITIAL VALUE"); 
    ble_srv_ascii_to_utf8(&dis_init.ble_dis_firmware_revision_string_initial_value.firmware_revision, "INITIAL VALUE"); 
    ble_srv_ascii_to_utf8(&dis_init.ble_dis_software_revision_string_initial_value.software_revision, "INITIAL VALUE"); 
    memset(&dis_init.ble_dis_system_id_initial_value.manufacturer_identifier,
           0x00,
           sizeof(dis_init.ble_dis_system_id_initial_value.manufacturer_identifier));
    memset(&dis_init.ble_dis_system_id_initial_value.organizationally_unique_identifier,
           0x00,
           sizeof(dis_init.ble_dis_system_id_initial_value.organizationally_unique_identifier));
    dis_init.ble_dis_ieee_11073_20601_regulatory_certification_data_list_initial_value.data.list_len = 1;
    dis_init.ble_dis_ieee_11073_20601_regulatory_certification_data_list_initial_value.data.p_list = m_dis_ieee_11073_20601_regulatory_certification_data_list_initial_value_data_arr; 
    dis_init.ble_dis_pnp_id_initial_value.vendor_id_source.vendor_id_source = VENDOR_ID_SOURCE_BLUETOOTH_SIG_ASSIGNED_COMPANY_IDENTIFIER_VALUE_FROM_THE_ASSIGNED_NUMBERS_DOCUMENT; 
    memset(&dis_init.ble_dis_pnp_id_initial_value.vendor_id,
           0x00,
           sizeof(dis_init.ble_dis_pnp_id_initial_value.vendor_id));
    memset(&dis_init.ble_dis_pnp_id_initial_value.product_id,
           0x00,
           sizeof(dis_init.ble_dis_pnp_id_initial_value.product_id));
    memset(&dis_init.ble_dis_pnp_id_initial_value.product_version,
           0x00,
           sizeof(dis_init.ble_dis_pnp_id_initial_value.product_version));

    err_code = ble_dis_init(&m_dis, &dis_init);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    } 

    // Initialize Battery Service.
    memset(&bas_init, 0, sizeof(bas_init));

    bas_init.evt_handler = on_bas_evt; 
    bas_init.is_battery_level_notify_supported = true;
    memset(&bas_init.ble_bas_battery_level_initial_value.level,
           0x00,
           sizeof(bas_init.ble_bas_battery_level_initial_value.level));

    err_code = ble_bas_init(&m_bas, &bas_init);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    } 

    // Initialize Tx Power.
    memset(&tps_init, 0, sizeof(tps_init));

    tps_init.evt_handler = on_tps_evt; 
    memset(&tps_init.ble_tps_tx_power_level_initial_value.tx_power,
           0x00,
           sizeof(tps_init.ble_tps_tx_power_level_initial_value.tx_power));

    err_code = ble_tps_init(&m_tps, &tps_init);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    } 

    // Initialize Acceleration service.
    memset(&acceleration_service_init, 0, sizeof(acceleration_service_init));

    acceleration_service_init.evt_handler = on_acceleration_service_evt; 
    acceleration_service_init.ble_acceleration_service_imu_data_initial_value.imu_array.size = 1;
    acceleration_service_init.ble_acceleration_service_imu_data_initial_value.imu_array.p_data = m_acceleration_service_imu_data_initial_value_imu_array_arr; 

    err_code = ble_acceleration_service_init(&m_acceleration_service, &acceleration_service_init);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    } 

    // Initialize Nordic UART Service.
    memset(&nordic_uart_service_init, 0, sizeof(nordic_uart_service_init));

    nordic_uart_service_init.evt_handler = on_nordic_uart_service_evt; 
    nordic_uart_service_init.ble_nordic_uart_service_tx_initial_value.tx.size = 1;
    nordic_uart_service_init.ble_nordic_uart_service_tx_initial_value.tx.p_data = m_nordic_uart_service_tx_initial_value_tx_arr; 
    nordic_uart_service_init.ble_nordic_uart_service_rx_initial_value.rx.size = 1;
    nordic_uart_service_init.ble_nordic_uart_service_rx_initial_value.rx.p_data = m_nordic_uart_service_rx_initial_value_rx_arr; 

    err_code = ble_nordic_uart_service_init(&m_nordic_uart_service, &nordic_uart_service_init);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    } 

    return NRF_SUCCESS;
}

/**@brief Function for handling the Application's BLE Stack events.
 *
 * @details Handles all events from the BLE stack of interest to all Bluetooth Developer Studio generated Services.
 *
 * @param[in]   p_ble_evt  Event received from the BLE stack.
 */
void bluetooth_on_ble_evt(ble_evt_t * p_ble_evt)
{ 
    ble_ess_on_ble_evt(&m_ess, p_ble_evt); 
    ble_dis_on_ble_evt(&m_dis, p_ble_evt); 
    ble_bas_on_ble_evt(&m_bas, p_ble_evt); 
    ble_tps_on_ble_evt(&m_tps, p_ble_evt); 
    ble_acceleration_service_on_ble_evt(&m_acceleration_service, p_ble_evt); 
    ble_nordic_uart_service_on_ble_evt(&m_nordic_uart_service, p_ble_evt); 
}