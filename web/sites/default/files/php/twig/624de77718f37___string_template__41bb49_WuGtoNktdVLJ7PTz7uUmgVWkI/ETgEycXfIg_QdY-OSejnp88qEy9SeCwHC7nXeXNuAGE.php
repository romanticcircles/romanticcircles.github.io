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

/* __string_template__41bb494160c1041b9c4952ceda107dad3fe2e648318ca3ed52a0204dfcff043d */
class __TwigTemplate_bfd37da3c5c9beecaf3d3c3bd49300c8ebba533921102a853330f206d7b423e7 extends \Twig\Template
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
        echo " ";
        if ((($context["delta"] ?? null) == 0)) {
            echo " 
<div class = \"panel\" >
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
<h3> 
    ";
            // line 8
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 8, $this->source)), "html", null, true);
            echo " 
    ";
            // line 9
            if (($context["field_collaborator"] ?? null)) {
                // line 10
                echo "    <br>In collaboration with ";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_collaborator"] ?? null), 10, $this->source)), "html", null, true);
                echo "
    ";
            }
            // line 12
            echo "</h3>
<p> ";
            // line 13
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_description"] ?? null), 13, $this->source)), "html", null, true);
            echo " </p>
</a>
</div>
</div>
<h4>";
            // line 17
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title"] ?? null), 17, $this->source), "html", null, true);
            echo "</h4>
</div>
";
        }
    }

    public function getTemplateName()
    {
        return "__string_template__41bb494160c1041b9c4952ceda107dad3fe2e648318ca3ed52a0204dfcff043d";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  78 => 17,  71 => 13,  68 => 12,  62 => 10,  60 => 9,  56 => 8,  51 => 6,  46 => 4,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__41bb494160c1041b9c4952ceda107dad3fe2e648318ca3ed52a0204dfcff043d", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 1);
        static $filters = array("escape" => 4, "striptags" => 8);
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
