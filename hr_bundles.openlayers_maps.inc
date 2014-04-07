<?php
/**
 * @file
 * hr_bundles.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function hr_bundles_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'hr_bundles';
  $openlayers_maps->title = 'Bundles';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0,0',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
        'div' => 'hr-bundles-layer-switcher',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_plus_behavior_blockswitcher' => array(
        'enabled' => 0,
        'open' => 1,
        'overlay_style' => 'checkbox',
        'position' => 'ne',
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'hr_bundles_er' => 'hr_bundles_er',
          'hr_bundles_l' => 'hr_bundles_l',
          'hr_bundles_n' => 'hr_bundles_n',
          'hr_bundles_h' => 'hr_bundles_h',
          'hr_bundles_wash' => 'hr_bundles_wash',
          'hr_bundles_cccm' => 'hr_bundles_cccm',
          'hr_bundles_education' => 'hr_bundles_education',
          'hr_bundles_p' => 'hr_bundles_p',
          'hr_bundles_et' => 'hr_bundles_et',
          'hr_bundles_fs' => 'hr_bundles_fs',
          'hr_bundles_es' => 'hr_bundles_es',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapbox_world_bright',
    'layers' => array(
      'mapbox_world_bright' => 'mapbox_world_bright',
      'mapbox_world_dark' => 'mapbox_world_dark',
      'mapbox_world_light' => 'mapbox_world_light',
      'mapbox_world_print' => 'mapbox_world_print',
      'mapbox_world_black' => 'mapbox_world_black',
      'hr_bundles_education' => 'hr_bundles_education',
      'hr_bundles_cccm' => 'hr_bundles_cccm',
      'hr_bundles_wash' => 'hr_bundles_wash',
      'hr_bundles_p' => 'hr_bundles_p',
      'hr_bundles_et' => 'hr_bundles_et',
      'hr_bundles_es' => 'hr_bundles_es',
      'hr_bundles_fs' => 'hr_bundles_fs',
      'hr_bundles_h' => 'hr_bundles_h',
      'hr_bundles_n' => 'hr_bundles_n',
      'hr_bundles_l' => 'hr_bundles_l',
      'hr_bundles_er' => 'hr_bundles_er',
    ),
    'layer_weight' => array(
      'hr_bundles_education' => '0',
      'hr_bundles_cccm' => '0',
      'hr_bundles_wash' => '0',
      'hr_bundles_p' => '0',
      'hr_bundles_et' => '0',
      'hr_bundles_es' => '0',
      'hr_bundles_fs' => '0',
      'hr_bundles_h' => '0',
      'hr_bundles_n' => '0',
      'hr_bundles_geojson' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hr_operations_geojson' => '0',
      'postgis_formatter_layer' => '0',
      'hr_bundles_l' => '0',
      'hr_bundles_er' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hr_bundles_geojson' => 'hr_default',
      'hr_operations_geojson' => '0',
      'postgis_formatter_layer' => '0',
      'hr_bundles_er' => 'hr_default',
      'hr_bundles_l' => 'hr_default',
      'hr_bundles_n' => 'hr_default',
      'hr_bundles_h' => 'hr_default',
      'hr_bundles_wash' => 'hr_default',
      'hr_bundles_cccm' => 'hr_default',
      'hr_bundles_education' => 'hr_default',
      'hr_bundles_p' => 'hr_default',
      'hr_bundles_et' => 'hr_default',
      'hr_bundles_fs' => 'hr_default',
      'hr_bundles_es' => 'hr_default',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hr_bundles_geojson' => 'hr_default',
      'hr_operations_geojson' => '0',
      'postgis_formatter_layer' => '0',
      'hr_bundles_er' => 'hr_default',
      'hr_bundles_l' => 'hr_default',
      'hr_bundles_n' => 'hr_default',
      'hr_bundles_h' => 'hr_default',
      'hr_bundles_wash' => 'hr_default',
      'hr_bundles_cccm' => 'hr_default',
      'hr_bundles_education' => 'hr_default',
      'hr_bundles_p' => 'hr_default',
      'hr_bundles_et' => 'hr_default',
      'hr_bundles_fs' => 'hr_default',
      'hr_bundles_es' => 'hr_default',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hr_bundles_geojson' => 'hr_default',
      'hr_operations_geojson' => '0',
      'postgis_formatter_layer' => '0',
      'hr_bundles_er' => 'hr_default',
      'hr_bundles_l' => 'hr_default',
      'hr_bundles_n' => 'hr_default',
      'hr_bundles_h' => 'hr_default',
      'hr_bundles_wash' => 'hr_default',
      'hr_bundles_cccm' => 'hr_default',
      'hr_bundles_education' => 'hr_default',
      'hr_bundles_p' => 'hr_default',
      'hr_bundles_et' => 'hr_default',
      'hr_bundles_fs' => 'hr_default',
      'hr_bundles_es' => 'hr_default',
    ),
    'layer_activated' => array(
      'hr_bundles_er' => 0,
      'hr_bundles_l' => 0,
      'hr_bundles_n' => 0,
      'hr_bundles_h' => 0,
      'hr_bundles_wash' => 0,
      'hr_bundles_cccm' => 0,
      'hr_bundles_education' => 0,
      'hr_bundles_p' => 0,
      'hr_bundles_et' => 0,
      'hr_bundles_fs' => 0,
      'hr_bundles_es' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'hr_bundles_geojson' => 0,
      'hr_operations_geojson' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'hr_bundles_er' => 'hr_bundles_er',
      'hr_bundles_l' => 'hr_bundles_l',
      'hr_bundles_n' => 'hr_bundles_n',
      'hr_bundles_h' => 'hr_bundles_h',
      'hr_bundles_wash' => 'hr_bundles_wash',
      'hr_bundles_cccm' => 'hr_bundles_cccm',
      'hr_bundles_education' => 'hr_bundles_education',
      'hr_bundles_p' => 'hr_bundles_p',
      'hr_bundles_et' => 'hr_bundles_et',
      'hr_bundles_fs' => 'hr_bundles_fs',
      'hr_bundles_es' => 'hr_bundles_es',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'hr_bundles_geojson' => 0,
      'hr_operations_geojson' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'hr_default',
      'select' => 'hr_default',
      'temporary' => 'hr_default',
    ),
  );
  $export['hr_bundles'] = $openlayers_maps;

  return $export;
}