<?php
/**
 * @file
 * kr_picturemaps.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function kr_picturemaps_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Zen-Content';
  $picture_mapping->machine_name = 'zen_content';
  $picture_mapping->breakpoint_group = 'zen_content';
  $picture_mapping->mapping = array(
    'custom.user.z_content_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_square',
      ),
    ),
    'custom.user.z_content_narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_small',
      ),
    ),
    'custom.user.z_xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_admin',
      ),
    ),
  );
  $export['zen_content'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Zen-Hero Maps';
  $picture_mapping->machine_name = 'zen_hero_maps';
  $picture_mapping->breakpoint_group = 'zen_hero';
  $picture_mapping->mapping = array(
    'custom.user.z_hero' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_hero',
      ),
    ),
    'custom.user.z_hero_small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_hero_small',
      ),
    ),
    'custom.user.z_hero_tiny' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_hero_tiny',
      ),
    ),
  );
  $export['zen_hero_maps'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Zen-Z Maps';
  $picture_mapping->machine_name = 'zen_z_maps';
  $picture_mapping->breakpoint_group = 'zen_z';
  $picture_mapping->mapping = array(
    'custom.user.z_large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_default',
      ),
    ),
    'custom.user.z_medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_default',
      ),
    ),
    'custom.user.z_small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_square',
      ),
    ),
    'custom.user.z_xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kr_small',
      ),
    ),
  );
  $export['zen_z_maps'] = $picture_mapping;

  return $export;
}
