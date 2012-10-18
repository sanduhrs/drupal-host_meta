<?php

/**
 * Deliver XRD document; Menu callback.
 */
function host_meta_page($type = 'xml') {
  // Generate document
  $xrd = xrd_document('host_meta');

  // Deliver document
  drupal_add_http_header('Status', '200 OK');
  drupal_add_http_header('Content-Type', 'application/xrd+xml');
  print $xrd->to_xml();
  drupal_exit();
}