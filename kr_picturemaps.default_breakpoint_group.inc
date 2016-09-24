<?php
/**
 * @file
 * kr_picturemaps.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function kr_picturemaps_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'zen_content';
  $breakpoint_group->name = 'Zen-Content';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.z_content_wide',
    1 => 'custom.user.z_content_narrow',
    2 => 'custom.user.z_xs',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['zen_content'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'zen_hero';
  $breakpoint_group->name = 'Zen-Hero';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.z_hero',
    1 => 'custom.user.z_hero_small',
    2 => 'custom.user.z_hero_tiny',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['zen_hero'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'zen_z';
  $breakpoint_group->name = 'Zen-Z';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.z_large',
    1 => 'custom.user.z_medium',
    2 => 'custom.user.z_small',
    3 => 'custom.user.z_xs',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['zen_z'] = $breakpoint_group;

  return $export;
}
