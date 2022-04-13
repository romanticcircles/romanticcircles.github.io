<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* __string_template__595d6cc7539fb256e459e8d7956c8f076f5356daddd4e2c9e230291b4c5b198d */
class __TwigTemplate_88bb6050ff55b3b6d9a4572347cc4a0ad96a4267154a17aa584d9429472525a2 extends \Twig\Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = [
        ];
        $this->sandbox = $this->env->getExtension('\Twig\Extension\SandboxExtension');
        $this->checkSecurity();
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        // line 1
        if ((($context["delta"] ?? null) == 0)) {
            // line 2
            echo "<div class = \"panel\" >
<div class=\"square effect6\">
";
            // line 4
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 4, $this->source), "html", null, true);
            echo " 
<div class=\"info\">
<a href=\"";
            // line 6
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 6, $this->source), "html", null, true);
            echo "\">
<h3> ";
            // line 7
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 7, $this->source)), "html", null, true);
            echo " </h3>
<h5> ";
            // line 8
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_date_published"] ?? null), 8, $this->source)), "html", null, true);
            echo " </h5>
<p> ";
            // line 9
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_description"] ?? null), 9, $this->source)), "html", null, true);
            echo " </p>
</a>
</div>
</div>
<h4>";
            // line 13
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title"] ?? null), 13, $this->source), "html", null, true);
            echo "</h4>
</div>
";
        }
    }

    public function getTemplateName()
    {
        return "__string_template__595d6cc7539fb256e459e8d7956c8f076f5356daddd4e2c9e230291b4c5b198d";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  69 => 13,  62 => 9,  58 => 8,  54 => 7,  50 => 6,  45 => 4,  41 => 2,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__595d6cc7539fb256e459e8d7956c8f076f5356daddd4e2c9e230291b4c5b198d", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 1);
        static $filters = array("escape" => 4, "striptags" => 7);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape', 'striptags'],
                []
            );
        } catch (SecurityError $e) {
            $e->setSourceContext($this->source);

            if ($e instanceof SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

    }
}
