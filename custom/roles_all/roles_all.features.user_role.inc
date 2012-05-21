<?php

/**
 * Implementation of hook_user_default_roles().
 */
function roles_all_user_default_roles() {
  $roles = array();

  // Exported role: Client
  $roles['Client'] = array(
    'name' => 'Client',
  );

  // Exported role: Contact Center
  $roles['Contact Center'] = array(
    'name' => 'Contact Center',
  );

  // Exported role: General (ecw employee)
  $roles['General (ecw employee)'] = array(
    'name' => 'General (ecw employee)',
  );

  // Exported role: Interface team
  $roles['Interface team'] = array(
    'name' => 'Interface team',
  );

  // Exported role: Interfaces-worker
  $roles['Interfaces-worker'] = array(
    'name' => 'Interfaces-worker',
  );

  // Exported role: SAP
  $roles['SAP'] = array(
    'name' => 'SAP',
  );

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: ekbteam
  $roles['ekbteam'] = array(
    'name' => 'ekbteam',
  );

  return $roles;
}
