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

/* __string_template__11ff90d41902a3fd3987a47a7238f345956e0f3060d6415ecd3d716059296a9b */
class __TwigTemplate_f43462075f5c0c712c43010183896ca34aa92e46f2dae57b6e468f2ca2249c81 extends \Twig\Template
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
<div class=\"label_div\">
    <h4 class=\"card-title centered\">";
        // line 3
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title_1"] ?? null), 3, $this->source), "html", null, true);
        echo "</h4>
    <p class=\"centered\">
         ";
        // line 5
        if ((($context["delta"] ?? null) == 0)) {
            echo " Reviewed by ";
        }
        // line 6
        echo "         ";
        if ((($context["delta"] ?? null) != 0)) {
            echo ", ";
        }
        // line 7
        echo "         ";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 7, $this->source), "html", null, true);
        echo "  </p>
     <p class=\"centered\">
         ";
        // line 9
        if ((($context["delta_1"] ?? null) == 0)) {
            echo " Authored by ";
        }
        // line 10
        echo "         ";
        if ((($context["delta_1"] ?? null) != 0)) {
            echo ", ";
        }
        // line 11
        echo "         ";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 11, $this->source), "html", null, true);
        echo " </p>
<div class=\"home-img\">
    ";
        // line 13
        if (($context["field_image"] ?? null)) {
            // line 14
            echo "        ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 14, $this->source), "html", null, true);
            echo "
    ";
        }
        // line 16
        echo "</div>
    
</div>
</a>";
    }

    public function getTemplateName()
    {
        return "__string_template__11ff90d41902a3fd3987a47a7238f345956e0f3060d6415ecd3d716059296a9b";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  88 => 16,  82 => 14,  80 => 13,  74 => 11,  69 => 10,  65 => 9,  59 => 7,  54 => 6,  50 => 5,  45 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__11ff90d41902a3fd3987a47a7238f345956e0f3060d6415ecd3d716059296a9b", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 5);
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
