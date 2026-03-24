<?php
/**
 * @file
 * Template to display Bootstrap accordions.
 *
 * Variables available (beyond standard Views variables):
 * - $title: Contains a title for the accordion group.
 * - $behavior: Describes the initial collapse options for the group.
 * - $title_classes: Space-delimited list of classes to put on the toggle.
 * - $titles: The field to use for the titles for each row.
 * - $labels: The field to use for the labels for each row.
 * - $title_tag: Tag to use on each panel title.
 * - $options['nested']: Whether to render groups as collapsible outer panels.
 *
 * @ingroup views_templates
*/
?>
<?php if (!empty($title)): ?>
  <?php if (!empty($options['nested'])): ?>
    <div class="panel panel-default">
      <div class="panel-heading" role="tab">
        <<?php print $title_tag; ?> class="panel-title">
          <a class="accordion-toggle collapsed" data-toggle="collapse"
            href="#views-bootstrap-accordion-<?php print $id ?>"
            aria-expanded="false">
            <?php print $title ?>
          </a>
        </<?php print $title_tag; ?>>
      </div>
  <?php else: ?>
    <h3><?php print $title ?></h3>
  <?php endif ?>
<?php endif ?>
<?php $loop_count = 0; ?>
<div id="views-bootstrap-accordion-<?php print $id ?>"
  class="<?php print implode(' ', $classes) ?><?php if (!empty($options['nested']) && !empty($title)): ?> panel-collapse collapse<?php endif ?>"
  role="tablist" aria-multiselectable="true">
  <?php foreach ($rows as $key => $row): ?>
  <?php
    $loop_count++;
    $expanded = (($loop_count == 1 && $behavior == 'first') || $behavior == 'all') ? 'true' : 'false';
    $title_classes = 'accordion-toggle';
    $title_classes .= $expanded ? '' : ' collapsed';
    ?>
    <?php if (isset($titles[$key])): ?>
      <div class="panel panel-default">
        <div class="panel-heading" role="tab" id="heading<?php print $id . '-' . $key ?>">
          <<?php print $title_tag; ?> class="panel-title">
            <a role="button" class="<?php print $title_classes ?>"
              data-toggle="collapse"
              data-parent="#views-bootstrap-accordion-<?php print $id ?>"
              href="#collapse-<?php print $id . '-' . $key ?>"
              aria-expanded="<?php print $expanded ?>"
              aria-controls="collapse-<?php print $id . '-' . $key ?>">
              <?php print $titles[$key] ?>
            </a>
            <?php if (isset($labels[$key])): ?>
              <span class="badge pull-right"><?php print $labels[$key] ?></span>
            <?php endif ?>
          </<?php print $title_tag; ?>>
        </div>

        <div id="collapse-<?php print $id . '-' . $key ?>" class="panel-collapse collapse<?php if ($expanded == 'true') {print ' in';
       } ?>" role="tabpanel" aria-labelledby="heading<?php print $id . '-' . $key ?>">
          <div class="panel-body">
            <?php print $row ?>
          </div>
        </div>
      </div>
    <?php endif ?>
  <?php endforeach ?>
</div>
<?php if (!empty($options['nested']) && !empty($title)): ?>
  </div><?php /* /.panel.panel-default */ ?>
<?php endif ?>
