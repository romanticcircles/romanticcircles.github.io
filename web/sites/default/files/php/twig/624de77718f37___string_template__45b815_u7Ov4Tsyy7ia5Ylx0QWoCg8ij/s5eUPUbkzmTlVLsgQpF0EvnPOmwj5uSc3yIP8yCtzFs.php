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

/* __string_template__45b815337b1156e2d6e9f83750d7a6af647065499b685884dbcbf0ef0ed4b59c */
class __TwigTemplate_8e8ab8d3c653cb5395b532584fd16ac2988fbf81421d4be32615f9f604a61c44 extends \Twig\Template
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
        echo "<a href=\"";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 1, $this->source), "html", null, true);
        echo "\">
<div class=\"\"home-title\">
    <div class=\"home-img\"> 
    ";
        // line 4
        if (($context["field_image"] ?? null)) {
            // line 5
            echo "        ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 5, $this->source), "html", null, true);
            echo "
    ";
        }
        // line 7
        echo "    </div>
      <h4 class=\"card-title\">";
        // line 8
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_heading"] ?? null), 8, $this->source), "html", null, true);
        echo "</h4>
      <h5 class=\"card-title\">";
        // line 9
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_role"] ?? null), 9, $this->source), "html", null, true);
        echo "</h5>
</div>
</a>";
    }

    public function getTemplateName()
    {
        return "__string_template__45b815337b1156e2d6e9f83750d7a6af647065499b685884dbcbf0ef0ed4b59c";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  61 => 9,  57 => 8,  54 => 7,  48 => 5,  46 => 4,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__45b815337b1156e2d6e9f83750d7a6af647065499b685884dbcbf0ef0ed4b59c", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 4);
        static $filters = array("escape" => 1);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape'],
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
